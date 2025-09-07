//maximum element in the array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int x = arr[0];
    for(int j=1; j<n; j++){
        if(arr[j]>=x){
            x=arr[j];
        }

    }
    cout<<x;
}