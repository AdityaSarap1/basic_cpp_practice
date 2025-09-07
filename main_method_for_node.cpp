/******************************************************************************

class node using pointer

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
//the above is  a proper node of a linked list
int main()
{
	/*node a(10);
	node b(20);
	b.val=20;
	node c(30);
	node d(40);
	//forming linked list;
	a.link=&b;
	b.link=&c;
	c.link=&d;
	d.link=NULL;*/
	//noob method

	//pro method
	node*a=new node(10);
	node*b=new node(20);
	node*c=new node(30);
	node*d=new node(40);
	
	a->next=b;
	b->next=c;
	c->next=d;
	

	//printing a linked list
	node *temp=a;
	while(temp!=NULL){
	    cout<<temp->val<<" ";
	    temp=temp->next;
	}
	
	return 0;
}