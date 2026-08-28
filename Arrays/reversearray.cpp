#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> s ={10,20,30,40,50,60,70};
    // reverse(s.begin(),s.end());
    int n =s.size();
    // int start=0,end = n-1;
    int start=1,end = n-4;
    while(start<end){
        int temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
    for(int i =0;i<n;i++){
        cout<<s[i]<<" ";
    }
}