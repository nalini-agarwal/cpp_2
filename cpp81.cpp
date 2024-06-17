//STL class (set)

#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> v={1,2,3,4,5,5}; //repeated values are not taken in set class
    v.insert(20); //insert is a function of this class. every class has it own unique functions.
    v.insert(90);

     //using for each loop to print elements
    cout<<"using for each loop"<<endl;
    for(int x:v){
        cout<<x<<endl;
    }

    //using iterator class
    cout<<"using Iterator class"<<endl;
    set<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end();itr++){
        cout<<*itr<<endl;
    }

    return 0;
}