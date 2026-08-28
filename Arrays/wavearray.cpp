#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5};
    int n = arr.size();
    int i =0,j=n-1;
    swap(arr[i],arr[j]);
}