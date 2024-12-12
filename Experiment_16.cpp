/*Write C++ program for storing binary number using doubly linked lists. 
Write functions- 
a) To compute 1‘s complement 
b) Add two binary numbers */
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* nxt;

    node(int val) {
        data = val;
        prev = nxt = NULL;
    }
};

class BinaryNumber {
public:
    node* head;
    node* tail;

    BinaryNumber() {
        head = tail = NULL;
    }

    void insertEnd(int val) {
        node* newNode = new node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->nxt = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data;
            temp = temp->nxt;
        }
        cout << endl;
    }

    void onesComplement() {
        node* temp = head;
        while (temp != NULL) {
            temp->data = (temp->data == 0) ? 1 : 0;
            temp = temp->nxt;
        }
    }

    void add(BinaryNumber& other) {
        node* temp1 = tail;
        node* temp2 = other.tail;
        int carry = 0;

        BinaryNumber result;
        
        while (temp1 != NULL || temp2 != NULL || carry) {
            int sum = carry;
            if (temp1 != NULL) {
                sum += temp1->data;
                temp1 = temp1->prev;
            }
            if (temp2 != NULL) {
                sum += temp2->data;
                temp2 = temp2->prev;
            }
            result.insertEnd(sum % 2);
            carry = sum / 2;
        }

        result.display();
    }
};

int main() {
    BinaryNumber num1, num2;

    num1.insertEnd(1);
    num1.insertEnd(0);
    num1.insertEnd(1);
    num1.insertEnd(1);

    num2.insertEnd(1);
    num2.insertEnd(1);
    num2.insertEnd(0);
    num2.insertEnd(1);

    cout << "Binary Number 1: ";
    num1.display();

    cout << "Binary Number 2: ";
    num2.display();

    cout << "One's Complement of Binary Number 1: ";
    num1.onesComplement();
    num1.display();

    cout << "Sum of Binary Numbers: ";
    num1.add(num2);

    return 0;
}
