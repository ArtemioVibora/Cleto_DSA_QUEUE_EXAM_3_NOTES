#include <iostream>
#include <malloc.h>

using namespace std;

struct Node {
    int value;
    Node* next;
};

bool isEmpty(Node* front, Node *rear) {
    return front == NULL && rear == NULL;
}

void push(Node **front, Node **rear, int item) {
    Node* ptr;

    ptr = (Node*)malloc(sizeof(Node));
    ptr->value = item;
    ptr->next = NULL;

    if (isEmpty(*front, *rear)) {
        *front = ptr;
        *rear = ptr;
    }
    else {
        (*rear)->next = ptr;
        *rear = ptr;
    }
    cout << "Item has been added!" << endl;
}

int pop(Node **front, Node **rear) {
    Node *ptr;

    int item;

    if (isEmpty(*front, *rear)) {
        cout << "Queue is empty!" << endl;
    }
    else {
        item = (*front)->value;
        ptr = *front;
        *front = (*front)->next;
    }

    if  (*front == NULL) {
        *rear = NULL;
    }
    free(ptr);

    cout << "Item has been removed!" << endl;
    return item;
}

int front(Node *front, Node *rear) {
    if (isEmpty(front, rear)) {
        cout << "Queue is empty!" << endl;
    }
    else {
        return front->value;
    }
}

void menu() {
    cout << "=====================================================" << endl;
    cout << "                      Le Queue                       " << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Front" << endl;
    cout << "4. Exit" << endl;
    cout << "=====================================================" << endl;
    cout << "Choice: ";
}

void runProgram() {
    Node *front;
    Node *rear;

    front = rear = NULL;


}

int main() {

}