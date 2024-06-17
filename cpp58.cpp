//inheritance in constructors 

#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"default of base"<<endl;
    }
    base(int x){
        cout<<"para of base "<< x<<endl;
    }
};
class derived : public base {
    public:
    derived(){
        cout<<"default of derived"<< endl;
    }
    derived(int a){
        cout<<"para of derived "<< a<<endl;
    }
    derived (int x, int a): base(x){
        cout<<"para of derived "<< a<< endl;
    }
};
int main(){
    derived d;//this calls default base then default derived 
    derived d1(10);//this will call defalut base then para derived 
    derived d2(10,20); // this will call para base then para derived 
    return 0;
}