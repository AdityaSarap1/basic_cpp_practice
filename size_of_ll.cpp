/******************************************************************************

display size of a linked list

notes: head is not a node but the pointer containing address to the first node

we always create a temp node whom we initialise and equate to head andit id used
for traversal or other functions in the linked list

*******************************************************************************/
#include <iostream>
using namespace std;
class node {
public:
	int val;
	node *next;
	node(int val) {
		this->val=val;//node::val=val;
		this->next=NULL;
	}
};

//function to display a linked list
void display(node *head){
    node *temp=head;
	while(temp!=NULL){
	    cout<<temp->val<<" ";
	    temp=temp->next;
	}
	cout<<endl;
}

//function to tell the size of a list
void size(node *head){
    node *temp=head;
    int n=0;
	while(temp!=NULL){
	    n++;
	    
	    temp=temp->next;
	}
	cout<<n<<endl;
    
}

int main()
{
	node*a=new node(10);
	node*b=new node(20);
	node*c=new node(30);
	node*d=new node(40);
	
	a->next=b;
	b->next=c;
	c->next=d;
	

	//printing a linked list using the created function display()
    display(a);
    size(a);
	
	return 0;
}