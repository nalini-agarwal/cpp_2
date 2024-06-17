//STL class (MAP)

#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m.insert(pair<int,string>(1,"nalini"));
    m.insert(pair<int,string>(2,"diya"));
    m.insert(pair<int,string>(3,"agarwal"));

    //using map iterator 
    map<int,string> :: iterator itr;
    for(itr=m.begin(); itr!=m.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    //to find a value in map
    map<int,string> :: iterator itr1;
    itr1=m.find(2);
    cout<<"value found"<<endl;
    cout<<itr1->first<<" "<<itr1->second<<endl;

    return 0;
}