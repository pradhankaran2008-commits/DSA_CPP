#include <iostream>
using namespace std;
// int power(int a,int b){
    // if(b==0) return 1;
    // return a * power(a,b-1);
    int power(double a,long long b){
    if(b==0) return 1;
    if(b<0){
        a=1/a;
        b=-b;
    }
    if(b%2==0) return power(a,b/2) *power(a,b/2);
    else return power(a,b/2)*power(a,b/2)*a;
}
int main(){
    int a ,b;
    cin>>a>>b;
    cout<<power(a,b);
}