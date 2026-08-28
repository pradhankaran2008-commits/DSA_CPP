#include <iostream>
using namespace std;
int main(){
    int arr[][4] = {{5,8,1,2},{4,9,5,7},{1,2,3,4}};
        for(int i =0;i<3;i++){
            for(int j=0;j<4;j++){
                if(i==j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }
     }