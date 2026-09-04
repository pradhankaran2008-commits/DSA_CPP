#include<iostream>
using namespace std;

void aryan(){
    cout<<"aryan"<<endl;
}

void param(){
    aryan();
    cout<<"param"<<endl;
    aryan();
}

void kartik(){
    aryan();
    cout<<"kartik"<<endl;
    param();   
}

int main(){
    kartik();
    param();
    aryan();
}