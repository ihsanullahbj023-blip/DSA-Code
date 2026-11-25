
#include <iostream>
using namespace std;

// Node Structure
struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

// Push Operation
void push(int value) {

    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = top;

    top = newNode;
}

// Display Stack
void display() {

    Node* temp = top;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {

    push(10);
    push(20);
    push(30);

    cout << "Stack Elements: ";
    display();

    return 0;
}
