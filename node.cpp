/******************************************************************************
node

*******************************************************************************/
/*#include <iostream>
using namespace std;
class node{
    public:
    int val;
    node *link;
}
int main()
{
    node a;
    a.val=1;
    node b;
    b.val=2;
    node c;
    c.val=3;
    node d;
    d.val=4;
    //forming linked list;
    a.link=&b;
    b.link=&c;
    c.link=&d;
    d.next=NULL;
    
    

    return 0;
}
rewriting the above using constructors
*/
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
    
    cout<<a.link<<endl<<d.link<<endl<<&b;
    //if i want to access or print val of b without using b i can do it with a.link which is a pointer
    //that points to b
    cout<<b.val;
    cout<<a.link->val;
    
    /*to access d using a is very intersting
    a.link is the address of b (&b)
    by using dereferencing operator *
    *(a.link) is b itself because *&b=b*/
    cout<<(((a.link)->link)->link)->val;
    
    return 0;
}