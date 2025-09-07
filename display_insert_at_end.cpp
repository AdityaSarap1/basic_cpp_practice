/******************************************************************************

display and insert a node at the end of a linked list

insert at end
first check size>0 atleast one node shoukd be present to delete

then create a new node you wanna add

tail->next=temp;
tail=next;

if size=0
create new npde in the same way
node *temp=new node(10);
head =tail=temp;

*******************************************************************************/
#include <iostream>
using namespace std;
class node { //this is a user defined data type
public:
	int data;
	node* next= NULL;
	node(int data) {
		this->data=data;
		this->next=NULL;
	}
};
class linkedList { //user defined data structure
public:
	node* head;
	node*tail;
	int size;
	linkedList() {
		head=tail=NULL;
		size;
	}
	void InsertAtTail(int data) {
		node* temp= new node(data);
		if(size==0) {
			head=tail=temp;
			
		}
		else {
			tail->next=temp;
			tail=temp;
		}
		size++;
	}
	void display() {
		node* temp=head;
		while(temp!=NULL) {
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
};

int main() {
	linkedList ll;//linked list is not a pointer
	ll.InsertAtTail(50);
	ll.display();
    ll.InsertAtTail(25);
    ll.InsertAtTail(15);
    ll.InsertAtTail(10);
    ll.InsertAtTail(6);
    ll.display();
    cout<<ll.size<<"\nhello world";
	return 0;
}