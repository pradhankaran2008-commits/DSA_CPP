#include <iostream>
using namespace std;

int fact(int x){
    if(x==0 || x==1) return 1;
    int ans = x * fact(x-1);
    return ans;
}

int main(){
    int x;
    cin>>x;
    cout<<fact(x);
}