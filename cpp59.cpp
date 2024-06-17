#include<iostream>
using namespace std;
class parent {
    private: int a;
    protected: int b;
    public: int c, d;
    
    void parentfun(){
        a=10;
        b=20;
        c=30;
        d=0;
    }
};
class child : public parent {
    public:
    void childfun(){
    //  a=15; //this will give error cause it is private 
        b=25;
        c=35;
    }
};
class grandchild : public child {
    public :
    void grandchildfun(){
    //  a=35; // again it is private therefore error
        b=45;
        c=55;
    }
};
class supergrandchild : protected grandchild{
    public :
    void supergrandchildfun(){
       // a=38; error cause private 
        b=25;
        d=88; //these ( b and d) are fine cause they now lie in protected 
    }
};
// if it was private then we cannot access it in another inheriting class. bcz then all members become private
int main(){
    child c ;
    //c.a=10; // this will give error as object cannt be made of private members 
    //c.b = 30; //this will give error as object cannt be made of protected members
      c.c=50;
    // c.d =40; thid will give an error now as it is protected and now it cannot be made an object 
      return 0; 
}