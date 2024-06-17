//destructors

#include<iostream>
using namespace std;
class demo{
    int *p;
    public:
    demo(){
        p=new int[10];
        cout<<"demo is constructed"<<endl;
    }
    ~demo(){
        delete[]p;    //this deletes the memory allocated to it. so, no memory leaks,
        cout<<"demo is destructed"<<endl; 
    }
};
fun(){
    // demo d;    (this can be done dynamically:- )
    demo *p = new demo();
    delete p;
}
int main(){
    fun();
    return 0;
}