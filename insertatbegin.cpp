/******************************************************************************

class linked list

class linked list{
    node* head;
    node* tail;
    size=0;
    
}

*******************************************************************************/
#include <iostream>
using namespace std;
class node{//this is a user defined data type
    public:
    int data;
    node* next= NULL;
    node(int val){
        this->data=val;
        this->next=NULL;
    }
};
class linkedList{//user defined data structure
    public:
    node* head;
    node*tail;
    int size;
    linkedList(){
    head=tail=NULL;
    size=0;
    }
};

int main(){
        linkedList ll;
        
        
        return 0;
}
    
    
    
    
