#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size :";
    cin>>n;
    int arr[n];
    cout<<"enter array elements :";
    for(int i =0;i<n-1;i++){
        cin>>arr[i]; 
    }

    for(int i =0;i<n-1;i++){
        if(arr[i]<0)
        cout<<arr[i];
    }
}