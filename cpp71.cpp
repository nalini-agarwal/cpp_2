#include<iostream>
using namespace std;
#define pi 3.14 //to make pi constant throughout as 3.14. these are called sybolic constants.
#define c cout
int main(){
    int area;
    area=pi*(9);
    c<<area<<endl;
    return 0;
}
/*
we can use #define SQR(x)(x*x)... then when in main we write SQR(5)..it will give 25. 
#define MSG(x) #x ...to make a parameter in double quotes 
*/