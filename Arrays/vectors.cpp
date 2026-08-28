#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5,7);
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5);
    arr.push_back(-234567);
     for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     arr.pop_back();
        for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
        }
}