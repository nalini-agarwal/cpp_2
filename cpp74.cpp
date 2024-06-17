//virtual destructors

#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"constructor of base"<<endl;
    }
    virtual ~base(){      ///we do this to ensure that virtual class destructor also gets deleted
        cout<<"destructor of base"<<endl;
    }
};
class derived: public base {
    public:
    derived(){
        cout<<"constructor of derived"<<endl;
    }
    ~derived(){
        cout<<"destructor of derived"<<endl;
    }
};
void fun(){
    base *p=new derived(); //base class pointer derived class object
    delete p;  //without virtual ~base, only destructor of base gets deleted. 
}
int main(){
    fun();
    return 0;
}