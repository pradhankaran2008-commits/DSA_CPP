#include <iostream>
using namespace std;

class pokemon{
    public:
    string name;
    string type;
    int hp;
    pokemon(string name,string type,int hp){
        this->hp = hp;
        this->name = name;
        this->type = type;
    }
    void print(){
        cout<<name<<" "<<type<<" "<<hp<<endl;
    }
};
int main(){
    pokemon p3("Mewtwo","Psychic",200);
    p3.print();
}