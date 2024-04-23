#include <iostream>
#include <memory>
#include <unordered_set>

class Node {
public:
    int data;
    std::shared_ptr<Node> next;

    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
public:
    std::shared_ptr<Node> head;

    LinkedList() : head(nullptr) {}

    void append(int data) {
        std::shared_ptr<Node> new_node = std::make_shared<Node>(data);
        if (!head) {
            head = new_node;
            return;
        }
        std::shared_ptr<Node> last_node = head;
        while (last_node->next) {
            last_node = last_node->next;
        }
        last_node->next = new_node;
    }

    void remove(int data) {
        std::shared_ptr<Node> temp = head, prev = nullptr;
        if (temp && temp->data == data) {
            head = temp->next;
            return;
        }
        while (temp && temp->data != data) {
            prev = temp;
            temp = temp->next;
        }
        if (!temp) return;
        prev->next = temp->next;
    }

    bool detect_loop() {
        std::unordered_set<std::shared_ptr<Node>> node_st;
        std::shared_ptr<Node> current = head;

        while( current != nullptr)
        {
            if(node_st.find(current) != node_st.end() )
            {
                return true;    //loop detected
            }
            else
            {
                node_st.insert(current);
                current = current->next;
            }
        }
        return false;           //loop not detected
    }

    void print_list() {
        std::shared_ptr<Node> cur_node = head;
        while (cur_node) {
            std::cout << cur_node->data << std::endl;
            cur_node = cur_node->next;
        }
    }
};


// Example usage
int main() {
    LinkedList llist;
    llist.append(1);
    llist.append(2);
    llist.append(3);

    std::cout << "Original List:" << std::endl;
    llist.print_list();

    llist.remove(2);
    std::cout << "List after removing 2:" << std::endl;
    llist.print_list();

    //Before adding loop
    std::cout << "Before adding loop: " << (llist.detect_loop() ? "Yes" : "No") << std::endl;
   

    // Creating a loop for demonstration
    llist.head->next->next = llist.head;
    std::cout << "Loop detected: " << (llist.detect_loop() ? "Yes" : "No") << std::endl;

    return 0;
}

