//lambda expression 
//it is used whenever we dont want to name a function or its parameters
#include<iostream>
using namespace std;
int main(){
    [](){cout<<"hello ";}();
    //for parameter
    [](int x,int y){cout<<"sum is "<<x+y<<endl;}(10,5);
    int z= [](int a, int b){return a+b;}(10,80);
    cout<<z;
    int c=70; int d=40;
    [c,d](){cout<<c<<" "<<d<<endl;}();
    [&](){cout<<++c<<" "<<++d<<endl;}();
}
