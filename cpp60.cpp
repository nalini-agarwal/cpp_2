// base class pointer, derived class object 

#include<iostream>
using namespace std;
class base{
    public:
    void show(){
        cout<<"hello"<<endl;
    }
    void show2(){
        cout<<"goodmorning"<<endl;
    }
};
class derived : public base{
    public:
    void show3(){
        cout<<"good evening"<<endl;
    }
    void show4(){
        cout<<"goodnight"<<endl;
    }
};
int main(){
    base *p;
    p= new derived(); // in 22 and 23rd line we created a pointer of base class and object of derived class. we can do this and only call base class methods. not derived. vise versa of pointer and object is not allowed. 

    //another way of doing this :
    derived d;
    base *p= &d;

    p-> show();
    p-> show2();
    //p->show3(); Not Allowed 
   // p->show4(); Not Allowed 
   
   // derived *p ;
   // p= new base(); this is also not allowed 
   return 0;
}