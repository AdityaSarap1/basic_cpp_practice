#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max_ele=INT_MIN;
    for(int i=0; i<n; i++){
        if(max_ele<arr[i])
        {
            max_ele = arr[i];
        }

    }
    int second_max_ele=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] != max_ele && second_max_ele < arr[i])
        {
            second_max_ele = arr[i];
        }

    }

    cout<<"Largest element is "<<max_ele<<endl<<"Second largest element is "<<second_max_ele;
    return 0;
}//
// Created by ADITYA on 26-07-2025.
//
