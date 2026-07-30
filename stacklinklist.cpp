#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;  

void push(int x) {
    node* temp = new node;
    temp->data = x;
    temp->next = head;
    head = temp;
}

void pop() {
    if (head == NULL) {
        cout << "Stack is empty!" << endl;
        return;
    }
    node* temp = head;
    cout << "Popped: " << temp->data << endl;
    head = head->next;
    delete temp;
}

void printStack() {
    node* temp = head;
    cout << "Stack: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    printStack();

    pop();
    printStack();

    pop();
    printStack();

    return 0;
}
