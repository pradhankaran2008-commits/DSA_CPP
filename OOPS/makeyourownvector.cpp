#include <iostream>
using namespace std;

class myvector{
    private:
    int length;
    int* arr;
    int cap;
    public:
    myvector(int capacity, int default_value){
       length =  cap = capacity;
        arr = new int[capacity];
        for(int i =0;i<capacity;i++){
            arr[i] = default_value;
        }
    }
    void pop_back(){
        if(length == 0){
            cout<<"Vector is Empty!"<<endl;
            return;
        }
        length--;
    }
    void push_back(int val){
                if(length == cap){ // array is FULL
            cap = 2*cap;
            int* temp = new int[cap];
            for(int i=0;i<length;i++){
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
        }
        arr[length] = val;
        length++;
    }
    void dispaly(){
        for(int i =0;i<length;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    myvector v(5,-1);
    v.dispaly();
    v.pop_back();
    v.dispaly();
    

}