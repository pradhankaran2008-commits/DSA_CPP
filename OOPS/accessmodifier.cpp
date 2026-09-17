#include <iostream>
using namespace std;
class cricketer{
private:
        string name;
        int run;
        double avg;
public:
    // string name;
    // int run;
    // double avg;
    cricketer(string name,int run,double avg){
        this->name = name;
        // (*this).name  = name;
        this->avg = avg;
        this->run = run;
    }
     void print(){ //getter
        cout<<name<<endl;
        cout<<run<<endl;
        cout<<avg<<endl;
    }
    int getrun(){ //getter method
        return run;
    }
    void setrun(int run){ // setter method
        this->run = run;
    }

};

int main(){
    // cricketer* k = new 
    cricketer c("DHONI",11000,44.4);
    // c.print();
     cout<<c.getrun()<<endl;
    c.setrun(16000);
    cout<<c.getrun()<<endl;
}