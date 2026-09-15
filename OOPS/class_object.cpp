#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int rno;
    float cgpa;
    int age;
    int height;
};

int main(){
    student x;
    x.name = "karan";
    x.cgpa = 8.10;
    x.rno = 7526;
    x.age = 18;
    x.height = 167;
    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<" "<<x.age<<" "<<x.height<<" "<<endl;
}