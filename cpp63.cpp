#include<iostream>
using namespace std;
class Car{
    public:
    virtual void start()=0; // pure virtual class 
};
class Innova:public Car{
    public:
    void start(){
        cout<<"Innova Started"<<endl;
    }
};
class Swift:public Car{
    public:
    void start(){
        cout<<"Swift Started"<<endl;
    }
};
int main(){
    // Car c; we cannot make object of abstract class (car)
    Car *p= new Innova();
    p->start();    
    p=new Swift();    
    p->start();
}