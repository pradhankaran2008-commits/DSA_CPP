#include<iostream>
using namespace std;

void aryan(int n){
     cout<<"aryan"<<endl; // ek extra printing hota hai;
    if(n==0) return;
    // cout<<"aryan"<<endl;
    aryan(n-1);
    
}

int main(){
    aryan(2);
}