
#include <iostream>
using namespace std;

// Define Linked List Node
struct Node {
    int data;
    Node* next;
};

int main() {

    // Create Linked List
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{5, nullptr};
    head->next->next->next = new Node{40, nullptr};
    head->next->next->next->next = new Node{5, nullptr};

    // Item to search
    int ITEM = 5;

    // Initialize LOC and ptr
    Node* LOC = nullptr;
    Node* ptr = head;

    // Search Algorithm
    while (ptr != nullptr) {

        if (ptr->data == ITEM) {
            LOC = ptr;
            break;
        }

        ptr = ptr->next;
    }

    // Display Linked List
    cout << "Linked List: ";

    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Display Search Result
    if (LOC != nullptr) {
        cout << "\nItem Found!" << endl;
        cout << "Searching Item: " << ITEM << endl;
        cout << "Node Data: " << LOC->data << endl;
        cout << "Node Address: " << LOC << endl;
    }
    else {
        cout << "\nItem Not Found!" << endl;
        cout << "LOC = NULL" << endl;
    }

    // Free Linked List Memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
