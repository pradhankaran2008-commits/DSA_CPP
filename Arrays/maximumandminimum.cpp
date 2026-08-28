#include <iostream>
using namespace std;
int main(){
    int arr[]= {2,55,66,7,99,345};
    int Max = arr[0];
    for(int i =0; i<6;i++)
    if(arr[i]>Max)
    Max = arr[i];
    cout<<Max;

    // int Min = arr[0];
    // for(int i =i;i<6;i++)
    // if(arr[i]<Min)
    // Min=arr[i];
    // cout<<"the minum elment is :"<<Min;

}