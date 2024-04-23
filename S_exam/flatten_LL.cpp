#include <iostream>
using namespace std;

// Node structure for a multi-level linked list
class Node {
public:
    int val;
    Node* next;
    Node* child;

    Node(int _val): val(_val) , next(nullptr) , child(nullptr){}
};

// Function to flatten the linked list
Node* flatten(Node* head) {
    if (!head) return head;

    Node* current = head;
    while (current) {
        if (current->child) {
            // Find the tail of the child list
            Node* childTail = current->child;
            while (childTail->next) {
                childTail = childTail->next;
            }

            // Connect the tail to the next node in the main list
            childTail->next = current->next;

            // Connect the current node to the child and then flatten the child list
            current->next = current->child;
            current->child = nullptr;

            // Flatten the child list recursively
            flatten(current->next);
        }
        current = current->next;
    }
    return head;
}

// Helper function to print the flattened list
void printFlattenedList(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Example usage
int main() {
    // Create a multi-level linked list
    // (1) -> (2) -> (3) -> (4)
    //          |
    //         (7) -> (8)
    //                |
    //               (11) -> (12)
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    head->next->child = new Node(7);
    head->next->child->next = new Node(8);

    head->next->child->next->child = new Node(11);
    head->next->child->next->child->next = new Node(12);

    // Flatten the list
    Node* flattenedList = flatten(head);

    // Print the flattened list
    printFlattenedList(flattenedList);

    return 0;
}
