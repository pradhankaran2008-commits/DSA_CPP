#include<iostream>
using namespace std;
void change(int arrr[]){
    arrr[1]=20;
}
int main(){
    int x[] = {6,1,12};
    change(x);
    cout<<x[1]<<endl;
}