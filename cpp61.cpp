// function overriding 
#include<iostream>
using namespace std;
class parent {
    public:
    void show(){
        cout<<"hello from parent"<<endl;
    }
};
class child: public parent{
    public:
    void show(){
        cout<<"hello from child"<<endl;
    }
};
int main (){
    child c;
    c.show();
    return 0;
}