//try catch in function 

#include<iostream>
using namespace std; //after this for exception handling we can also use a class. 
int divide(int a, int b){ //here before "{" we can write throw(int) which is optional 
    if(b==0){
        throw 101; // we can throw any kind of exception...like numb, string, char,float,double,etc
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
    catch(int e){
        cout<<"division by 0 "<<e<<endl;
    }
    cout<<"bye"<<endl;
    return 0;
}