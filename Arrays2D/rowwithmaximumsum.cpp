#include <iostream>
using namespace std;
int main(){
    int arr[][4] = {{5,8,1,2},{4,9,5,7},{1,2,3,4}};
    int maxsum =0;
   int maxrow=0;
        for(int i=0;i<3;i++){
            int sum=0;

            for(int j=0;j<4;j++){
           sum+=arr[i][j];
           cout<<sum<<" ";
            }
            if(sum>maxsum){
                maxsum = sum;
                maxrow =i;
            }
        } 
        cout<<endl;
       cout << maxsum << endl;
    cout <<maxrow  << endl;
    }