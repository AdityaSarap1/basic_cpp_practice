#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class linkedList {
public:
    node* head;
    node* tail;
    int size;

    linkedList() {
        head = tail = NULL;
        size = 0;
    }

    void InsertAtTail(int data) {
        node* temp = new node(data);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void InsertAtHead(int data) {
        node* temp = new node(data);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void InsertAtIdx(int idx, int data) {
        if (idx < 0 || idx > size) {
            cout << "Invalid index" << endl;
            return;
        } 
        if (idx == 0) {
            InsertAtHead(data);
        } 
        else if (idx == size) {
            InsertAtTail(data);
        } 
        else {
            node* temp1 = new node(data);
            node* temp2 = head;
            for (int i = 0; i < idx - 1; i++) {  // Stop at index-1
                temp2 = temp2->next;
            }
            temp1->next = temp2->next;
            temp2->next = temp1;
            size++;
        }
    }

    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    linkedList ll;
    ll.InsertAtTail(50);
    ll.display();
    
    ll.InsertAtTail(25);
    ll.InsertAtTail(15);
    ll.InsertAtTail(10);
    ll.InsertAtTail(6);
    ll.InsertAtHead(6);
    ll.InsertAtHead(10);
    ll.InsertAtHead(17);
    ll.display();
    
    ll.InsertAtIdx(1, 18);
    ll.display();  // Show updated list
    cout << "Size: " << ll.size << endl;

    return 0;
}
