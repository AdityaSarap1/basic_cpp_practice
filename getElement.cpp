/*if idx==0 return head
else if idx==size-1 return tqail
else if idx<0 || idx>size-1 return invalid*/


#include <iostream>
using namespace std;

class node { // This is a user-defined data type
public:
    int data;
    node* next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class linkedList { // User-defined data structure
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

    int getAtIndex(int idx) {
        if (idx < 0 || idx >= size) {
            return -1; // Invalid index
        }
        if (idx == 0) {
            return head->data;
        } 
        if (idx == size - 1) {
            return tail->data;
        }

        node* temp = head;
        for (int i = 0; i < idx; i++) { // Traverse to the correct index
            temp = temp->next;
        }
        return temp->data;
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
    linkedList ll; // Linked list is not a pointer
    ll.InsertAtTail(50);
    ll.InsertAtTail(25);
    ll.InsertAtTail(15);
    ll.InsertAtTail(10);
    ll.InsertAtTail(6);

    cout << "Element at index 3: " << ll.getAtIndex(3) << endl; // Print result

    return 0;
}
