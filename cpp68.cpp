//try catch

#include<iostream>
using namespace std;
int main(){
    int x=3; int y=0; int z;
    try{
        if(y==0){
            throw 101;
        }
        z=x/y;
        cout<<y<<endl;
    }
    catch(int e){
        cout<<"dividing by zero "<<e<<endl;
    }
    /*
    there is another kind of catch block which is called "CATCH ALL(elipse)":
    catch(...){
    cout<<"error"<<endl;
    }
    this catch block takes care of all kind of exception.use when we dont know which exception will come.

    also remember that this catch all block must come at the end after all the other catch blocks. 
    */
    cout<<"end"<<endl;
    return 0;

}
