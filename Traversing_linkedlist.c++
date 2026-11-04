// traversing a linked list 
//lis is a linked list in the memory.
// this algorithm find the location loc of the node where ITEM first appear 
// in LIST otherwise sets LOC =NULL.

#include <iostream>
using namespace std;
int main() {
    // Assuming a linked list structure is defined elsewhere
    // and we have a pointer to the head of the list.
    struct Node {
        int data;
        Node* next;
    };

    Node* head = nullptr; // Initialize head of the linked list
    // Code to populate the linked list would go here

    int ITEM = 5; // The item we are searching for
    Node* loc = nullptr; // Initialize loc to NULL
    Node* ptr = head; // Start processing from the head of the list

    while (ptr != nullptr) {
        if (ptr->data == ITEM) {
            loc = ptr; // Found the item, set loc to current node
            break; // Exit the loop as we found the item
        }
        ptr = ptr->next; // Move to the next node
    }

    if (loc != nullptr) {
        cout << "Item found at node with data: " << loc->data << endl;
    } else {
        cout << "Item not found in the list." << endl;
    }

    return 0;
}
