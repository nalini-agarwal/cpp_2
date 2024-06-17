//STL classes vector (uses array)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    v.push_back(6);
    v.push_back(7);
    v.pop_back();
    //using for each loop to print elements
    cout<<"using for each loop"<<endl;
    for(int x:v){
        cout<<x<<endl;
    }

    //using iterator class
    cout<<"using Iterator class"<<endl;
    vector<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end();itr++){
        cout<<*itr<<endl;
    }

    return 0;
}

// if we want that instead of array we want doubly linked list then istead of vector we will write list everywhere it is present. and use the functions that STL class (list) consists. 