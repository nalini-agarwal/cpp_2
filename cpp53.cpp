//constructors

#include<iostream>
using namespace std;
class rectangle{
    private:
    int length ;
    int breadth;

    public:

   /* for default constructor we can also write this or we can initialise the parameterised constructor 
    rectangle(){
        length =0;
        breadth =0;
    }
    */
    rectangle(int l=0, int b=0){
        setLength(l);
        setBreadth(b);
    }
    rectangle(rectangle &r){
        length = r.length;
        breadth =r.breadth;
    }


    void setLength(int l ){
        if(l>=0){
            length =l;
        }
        else{
            length =0;
        }
    }
    void setBreadth(int b){
        if(b>=0){
            breadth = b;
        }
        else{
            breadth = 0;
        }
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    rectangle r1;
    cout<<"area of r1 is "<<r1.area()<<endl;
    rectangle r2(10,5);
    cout<< "area of r2 is "<< r2.area()<<endl;
    rectangle r3(r2);
    cout<<"area of r3 is "<<r3.area()<< endl;
    return 0;

}