#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> k ={0,1,2,3,4};
    int n = k.size();
    int sumarray=10;
    int zerotonsum = (n*(n+1))/2;
    int diffbwthem = zerotonsum - sumarray;

    cout<<diffbwthem;
    
}