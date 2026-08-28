#include <iostream>
using namespace std;
int main(){
    int marks[] = {90, 80, 70,44,4,3,60, 50};
    // cout<<marks[2]<<endl;
    // marks[2] = 75;
    // cout<<marks[2]<<endl;
    // cin>>marks[2];
    // cout<<marks[2]<<endl;
    int n = sizeof(marks);

    for(int i=0; i<n; i++){
        cout<<marks[i]<<" "<<endl;
    }
}