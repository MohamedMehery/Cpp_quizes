#include <iostream>
#include <memory>
#include <string>

struct Node {
  int data;
  std::unique_ptr<Node> left;
  std::unique_ptr<Node> right;
  int level; // Added level for tree representation

  Node(int data, int level = 0) : data(data), left(nullptr), right(nullptr), level(level) {}
};

class BinaryTree {
 public:
  std::unique_ptr<Node> root;

 public:
  void insert(int data) {
    if (!root) {
      root = std::make_unique<Node>(data);
      return;
    }
    insert_helper(root.get(), data);
  }

  void insert_helper(Node* node, int data) {
    if (data < node->data) {
      if (!node->left) {
        node->left = std::make_unique<Node>(data);
      } else {
        insert_helper(node->left.get(), data);
      }
    } else {
      if (!node->right) {
        node->right = std::make_unique<Node>(data);
      } else {
        insert_helper(node->right.get(), data);
      }
    }
  }

  void print_tree(Node* node, std::string spaces = "") {
    if (node) {
      // Process right child first for a more balanced visual representation
      print_tree(node->right.get(), spaces + "  ");

      // Print current node with indentation based on level
      std::cout << spaces << node->data << std::endl;

      print_tree(node->left.get(), spaces + "  ");
    }
  }
};

int main() {
  BinaryTree tree;
  tree.insert(9);
  tree.insert(2);
  tree.insert(5);
  tree.insert(1);
  tree.insert(7);
  tree.insert(6);
  tree.insert(8);
  tree.insert(3);
  tree.insert(4);
  std::cout << "Tree representation:\n";
  tree.print_tree(tree.root.get());

  return 0;
}
