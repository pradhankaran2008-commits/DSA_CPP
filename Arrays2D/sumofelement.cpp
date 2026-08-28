#include <iostream>
using namespace std;
int main(){
    int arr[][4] = {{5,8,1,2},{4,9,5,7},{1,2,3,4}};
    int sum = 0;
    int product = 1;
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                sum+=arr[i][j];
                product*=arr[i][j];
                // cout<<sum<<" ";

        }
        cout<<endl;
    }
    cout<<sum<<" ";
    cout<<product;
}
