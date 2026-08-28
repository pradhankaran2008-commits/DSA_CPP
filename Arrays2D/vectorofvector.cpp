#include<iostream>
using namespace std;
int main(){
    vector<int> v1 = {4,5,3,2,6};
    vector<int> v2 = {5,3,2,6};
    vector<int> v3 = {3,2,6};
    vector<int> v4 = {1,2,3,45,6};

    vector<vector<int>> v ={v1,v2,v3,v4}; //jagged array

//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v3);
//     v.push_back(v4);
        for(int i =0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
            }
             cout<<endl;
        }
        cout<<endl;

}

