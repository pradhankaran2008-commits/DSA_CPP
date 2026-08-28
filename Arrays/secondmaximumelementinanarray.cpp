  #include <iostream>
  using namespace std;
  int main(){
    int arr[]= {2,5,6,8,44,55,65};
    int n =sizeof(arr)/4;
    int Max = INT_MIN;
    for(int i =0; i<n;i++){
    if(arr[i]>Max)
    Max = arr[i];
    }
    int sx = INT_MIN;
    for(int i =0; i<n;i++){
    if(arr[i]>sx and arr[i]!=Max)
    sx = arr[i];
    }
    cout<<sx;


}

// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int arr[] = {12, 35, 1, 10, 34, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int max1 = INT_MIN, max2 = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > max1) {
//             max2 = max1;
//             max1 = arr[i];
//         }
//         else if (arr[i] > max2 && arr[i] != max1) {
//             max2 = arr[i];
//         }
//     }

//     if (max2 == INT_MIN)
//         cout << "No second maximum element exists";
//     else
//         cout << "Second maximum element: " << max2;

//     return 0;
// }