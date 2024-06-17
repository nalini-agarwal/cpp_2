//try catch using class 

#include<iostream>
using namespace std; 
class myException: exception{

};
int divide(int a, int b)throw (myException){ 
    if(b==0){
        throw myException();
    }
    else{
        return a/b;
    }
}
int main(){
    int x=3; int y=0; int z;
    try{
        z = divide(x,y);
        cout<<z<<endl;
    }
    catch(myException e){
        cout<<"division by 0 "<<endl;
    }
    cout<<"bye"<<endl;
    return 0;
}
// if there is inheritance in classes then if there is a chance of exception in both the class then we first make a try catch block of the child class then the try catch block of the parent class.