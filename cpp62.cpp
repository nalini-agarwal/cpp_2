// virtual function 
#include<iostream>
using namespace std;
class base {
    public:
    virtual void show(){
        cout<<"hello from base"<<endl;
    }
};
class derived: public base{
    public:
    void show(){
        cout<<"hello from derived"<<endl;
    }
};
int main(){
    base *p = new derived();
   // p-> show();  base show will be called. when it isnt virtual.
    p-> show(); // this calles derived show when base show is made virtual 
    return 0;

}