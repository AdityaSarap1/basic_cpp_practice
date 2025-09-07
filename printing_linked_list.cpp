/******************************************************************************

printing ll

*******************************************************************************/
#include <iostream>
using namespace std;
class node{
    public:
    int val;
    node *link;
    node(int val){
        this->val=val;//node::val=val;
        this->link=NULL;
    }
};
//the above is  a proper node of a linked list
int main()
{
    node a(10);
    node b(20);
    b.val=20;
    node c(30);
    node d(40);
    //forming linked list;
    a.link=&b;
    b.link=&c;
    c.link=&d;
    d.link=NULL;
    
    /*cout<<a.link<<endl<<d.link<<endl<<&b;
    
    cout<<b.val;
    cout<<a.link->val;
 //d through a
    cout<<(((a.link)->link)->link)->val;*/
//----------------------------------------------------------------------------------------    
    //printing a linked list
    node *head= &a;
    node *temp= head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->link;
    }
//----------------------------------------------------------------------------------------    
    return 0;
}