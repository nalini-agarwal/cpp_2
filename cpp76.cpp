//reading file

#include<iostream>
#include<fstream>
using namespace std;
int main (){
    ifstream infile;
    infile.open("my.txt");
    /*to check if the file is open or not 
    if(!infile.is_open()){
        cout<<"cannot be openned"<<endl;
    }
    */
   string str;
   int x;
   infile>>str;
   infile>>x;
   cout<<str<<" "<<x<<endl;
   //to check if we have reached the end of file:-
   if(infile.eof()){
    cout<<"end of file reached"<<endl;
    infile.close();
   }
}