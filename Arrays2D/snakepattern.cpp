// #include <iostream>
// using namespace std;
// int main(){
//     int arr[][5] = {{5,8,1,2,6},{4,8,9,5,7},{1,2,3,4,66}};
//         for(int i=0;i<3;i++){
//             if(i%2==0){
//             for(int j=0;j<5;j++){
//             cout<<arr[i][j]<<" ";
            
//         }
//     }
//     else{
//         for (int j =4;j>=0;j--){
//             cout<<arr[i][j]<<" ";
//         }
//     }
//         cout<<endl;
//     }
// }


#include <iostream>
using namespace std;

int main() {

    int arr[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    for (int j = 0; j < 4; j++) {

        if (j % 2 == 0) {
            // Bottom to top
            for (int i = 3; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
        else {
            // Top to bottom
            for (int i = 0; i < 4; i++) {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}
