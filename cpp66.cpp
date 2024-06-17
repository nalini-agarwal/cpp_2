#include<iostream>
using namespace std;
class test{
    public:
    int a;
    static int count;
    test(){
        a=10;
        count++;
    }
    
    static int getCount(){
    //  a++; we cannot use non static members in static functions.
        return count;
    }
};
int test:: count =0; // we have declare static variable outside class as global variable but scope   resolution is only to that class.
int main(){
    test t1;
    test t2;
    cout<<t1.count<<endl; 
    cout<<t2.count<<endl; // both cout display same "2" because static member have shared memory.
    
    cout<< test::count<<endl; // we can directly access static members with class without object.

    cout<< test::getCount()<<endl; //to call static function. 
    return 0;
}