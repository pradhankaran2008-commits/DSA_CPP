#include <iostream>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr= {3,222,33,44,11,66,9};
    int n = arr.size();
    for(int j =0;j<=n-1;j++){
    for(int i =0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
    }
}
print(arr);
}
