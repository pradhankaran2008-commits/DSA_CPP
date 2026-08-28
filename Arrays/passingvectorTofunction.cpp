 #include<iostream>
 #include<vector>
using namespace std;
// void change(vector<int>& v){ //pass by refernce
 void change(vector<int> v){ //it is pass by value not like array (it is pass by reference(address))
        v[2]=99;
 }

 int main(){
    vector<int> v ={2,5,43,3};
    change(v);
    cout<<v[2]<<endl;

 }