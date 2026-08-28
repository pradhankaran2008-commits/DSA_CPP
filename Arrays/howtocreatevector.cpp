#include<iostream>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(35);
    arr.push_back(36);
    arr.push_back(37);
    arr.push_back(43);
    arr.push_back(53);
    arr.push_back(63);
    arr.push_back(63);
    arr.push_back(73);
    arr.push_back(33);
    arr.push_back(13);
    arr.push_back(30);
    cout<<arr.capacity()<<" "<<arr.size()<<endl;
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}