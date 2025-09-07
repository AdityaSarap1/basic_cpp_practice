#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    int key;
    cout<<"Enter the key to be searched: ";
    cin>>key;
    for(int i=0; i<n; i++){
        if(array[i]==key)
        {
            cout<<"Element is present at "<<i+1;
        }
    }
}
