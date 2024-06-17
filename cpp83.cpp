//auto data type
//if we donot know which datatype the data member will have then we can use it.

#include<iostream>
using namespace std;
int main(){
    auto x= 4.8+9+'a';
    cout<<x<<endl;
}


//another point:
//we use final keyword in c++ to restrict child class to override any function we want in parent class by writting 'final' at the end of the starting line of fun.