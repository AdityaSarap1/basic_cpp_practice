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
    int sec_min_ele=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]!=min_ele && arr[i]<sec_min_ele)
        {
            sec_min_ele = arr[i];
        }

    }
    cout<<min_ele<<endl;
    cout<<sec_min_ele;
    return 0;
}

