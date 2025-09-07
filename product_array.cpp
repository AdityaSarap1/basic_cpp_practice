#include<iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int i; int arr[n];
    for (i=0; i<n; i++) {
        cin>>arr[i];
    }
    int product = 1;
    for (i=1; i<n; i++) {
        product *= arr[i];
    }
    cout<<product;
    return 0;

}
