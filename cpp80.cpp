//STL class (single linked list)
#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> v={1,2,3,4,5};
    v.push_front(20); //push_front adds element in the beginning of the single linked list
    v.push_front(90);

     //using for each loop to print elements
    cout<<"using for each loop"<<endl;
    for(int x:v){
        cout<<x<<endl;
    }

    //using iterator class
    cout<<"using Iterator class"<<endl;
    forward_list<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end();itr++){
        cout<<*itr<<endl;
    }

    return 0;
}