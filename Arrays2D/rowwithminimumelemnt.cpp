#include <iostream>
using namespace std;
int main(){
    int arr[][4] = {{5,3,1,2},{4,9,5,7},{1,2,3,7}};
    int minrow =0;
        for(int i=0;i<3;i++){
            int minrowelement = 0;
            for(int j=0;j<4;j++){
                if(minrowelement<arr[i][j])
                minrowelement = arr[i][j];
                minrow = i;
        }
        cout<<endl;
        cout<<minrowelement;
    }
    cout<<endl;
    cout<<minrow;
}