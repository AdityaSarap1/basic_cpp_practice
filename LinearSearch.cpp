#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool flag = false; int i;
    for(i=0; i<n; i++){
        if(arr[i]==x){
            flag = true;
        }
    }
    if(flag==true){
        cout<<"the key element exists in the array at position "<<i+1;
    }
    else {
        cout<<"no such element exists";
    }
    return 0;
}