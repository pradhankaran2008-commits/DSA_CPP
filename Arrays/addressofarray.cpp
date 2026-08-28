 #include<iostream>
 using namespace std;
 int main(){
    int arr[]= {23,44,45,77,789};
    int n = sizeof(arr)/4;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
 }