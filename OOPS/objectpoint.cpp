#include <iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int run;
    double avg;
    cricketer(string name,int run,double avg){
        this->name = name;
        // (*this).name  = name;
        this->avg = avg;
        this->run = run;
    }
    void print(){
        cout<<name<<endl;
        cout<<run<<endl;
        cout<<avg<<endl;
    }

};
int main(){
    cricketer c1("virat",15000,58.62);
    cricketer c2("sachin sir",18000,48.62);

    cricketer* k = new cricketer("sam curran" , 2600,34.01);
    k->print();

    cricketer* ptr  = &c1;
    // (*ptr).avg = 62; //==.
    ptr->avg = 62; //both up and down are equal
    // cout<<ptr->avg<<endl;
    c1.print();
    cout<<(*ptr).name<<endl;
    cout<<(*ptr).run<<endl;
    cout<<(*ptr).avg<<endl;
}