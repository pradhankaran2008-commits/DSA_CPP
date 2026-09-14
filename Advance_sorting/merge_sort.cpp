#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& arr){
    for(int ele : arr)
     cout<<ele<<" ";
    cout<<endl;

}

void merge(vector<int>& a , vector<int>& b , vector<int>& c){
    int i =0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]) c[k++]=b[j++];
        else c[k++]=a[i++];
    }
    while(i<a.size()) c[k++]=a[i++];
    while(j<b.size()) c[k++]=a[j++];

}

void mergesort(vector<int>& arr){
    int n = arr.size();
    if(n<=1) return;
    vector<int> a(n/2);
    vector<int> b(n-n/2);
    int idx =0;
    for(int i =0; i<n/2;i++){
        a[i] = arr[idx++];
    }
    for(int i =0; i<n-n/2;i++){
        b[i] = arr[idx++];
    }
    mergesort(a);
    mergesort(b);
    merge(a,b,arr);


}

int main(){
 vector<int> arr ={2,3,6,8,5,1,-4,-99};
 int p = arr.size();
 for(int s = 0;s<p;s++){
   sort(arr.begin(),arr.end());
   cout<<arr[s]<<" "<<endl;
 }

 print (arr);
 mergesort(arr);
 print(arr);

}



