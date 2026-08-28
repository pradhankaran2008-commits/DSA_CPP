 #include<iostream>
 using namespace std;
        int main(){
    vector<int> r = {3,4,5,6,7};

    for(int i =0;i<r.size();i++)
    if(r[i]%2==0) r[i]*=2;
    else r[i]*=r[i];
   
    for(int Pradhan : r){
        cout<<Pradhan<<" ";
    }
        }