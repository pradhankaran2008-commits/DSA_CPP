#include <iostream>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr= {9,0,-2,0,-4,6,0,44,0,1};
    int n = arr.size();
    for(int j =0;j<=n-1;j++){
    for(int i =0;i<n-1;i++){
        if(arr[i]==0){
        swap(arr[i],arr[i+1]);
    }
    }
}
print(arr);
}
