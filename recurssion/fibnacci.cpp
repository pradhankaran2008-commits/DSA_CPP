#include <iostream>
using namespace std;

int fib(int n){
    if(n==0||n==1) return n;
    // int k= fib(n-1) + fib(n-2);
    // return k;
    else return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}