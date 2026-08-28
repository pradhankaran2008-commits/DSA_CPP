  #include <iostream>
  using namespace std;
  int main(){
    int arr[]= {0,1,1,0,1,0,1,0,0,1,1,1};
    int n =sizeof(arr)/4;
     int s =0;
     int p = 0;
    for(int i=0;i<n;i++){
     if(arr[i]==0)
     s++;
     else p++;
    }
    for(int i =0;i<s;i++){
      arr[i]=0;
    }
    for(int i=s;i<n;i++){
      arr[i]=1;
    }
    cout<<arr;
  }