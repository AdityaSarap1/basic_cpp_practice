#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min_ele=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min_ele)
        {
            min_ele = arr[i];
        }

    }
    cout<<min_ele;
    return 0;
}
