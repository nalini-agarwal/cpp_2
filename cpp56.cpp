//inheritance

#include<iostream>
using namespace std;
class a {
    public:
    int x;
    void show(){
        cout<<x<<endl;
    }
};
class b: public a{
    public:
    int y;
    void display(){
        cout<<y<<endl;
    }
};
int main(){
    a a1;
    a1.x=10;
    b b1;
    b1.x =11;
    b1.y=22;
    b1.display();
    b1.show();
    return 0;
}