#include <iostream>
using namespace std;

const int MAX_SIZE = 5;
int stack[MAX_SIZE];
int top = -1;

void push(int item) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack is full. Cannot push " << item << endl;
    } else {
        stack[++top] = item;
        cout << item << " pushed onto the stack." << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack is empty. Cannot pop." << endl;
    } else {
        cout << stack[top] << " popped from the stack." << endl;
        top--;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, item;
    while (1) {
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item to push: ";
                cin >> item;
                push(item);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}