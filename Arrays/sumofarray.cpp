#include <iostream>
using namespace std;
int main(){
    int arr[] = {22,33,44,55,66};
    int sum  = 1;
    for(int i=0;i<5;i++)
    // sum+=arr[i];  // Sum of array
    sum*=arr[i]; // Product of array
    cout<<sum;

}



// Sum of array