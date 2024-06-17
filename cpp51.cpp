//using pointer to an object 

#include<iostream>
using namespace std;
class rectangle{
    public:
    int length;
    int breadth; 
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    rectangle r1; // in stack 
    rectangle *ptr;
    ptr =&r1;
    ptr-> length =10; // way to access the length of rectangle through pointer. 
    ptr -> breadth = 15; 
    cout<< "area is "<< ptr->area()<<endl; 
    cout<<"perimeter is "<<ptr-> perimeter()<<endl;

    //for creating memory in heap we do this:- 
    rectangle r2;
    rectangle *ptr2 = new rectangle ();
    ptr2 =&r2;
    ptr2-> length =100; // way to access the length of rectangle through pointer. 
    ptr2 -> breadth = 150; 
    cout<< "area is "<< ptr2->area()<<endl; 
    cout<<"perimeter is "<<ptr2-> perimeter()<<endl;

    return 0;
}