#include <iostream>
using namespace std;
 class car{ //use rdefined data type
    public:
    string name;
    float mil;
    bool ise20compatible;
    int power;
 };
 int main(){
    car c1;
    c1.name ="kia";
    c1.mil = 9.2;
    c1.ise20compatible = true;
    c1.power = 111;

    car c2 ={"thar",15.2,false,123};
    cout<<c2.name<<" "<<c2.mil<<" "<<c2.ise20compatible<<" "<<c2.power<<endl;
 }