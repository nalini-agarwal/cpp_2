#include<iostream>
using namespace std;
struct Demo{ //a structure is different from class as its members are by default publuc and in class the members are by default private.
    int x;
    int y;

    void display(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    Demo d;
    d.x=10;
    d.y=20;
    d.display();
    return 0;
}