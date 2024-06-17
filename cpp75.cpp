//writing in a file

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream ofs("my.txt", ios:: trunc); //if any data is already available in the file...it deletes and rewrite
    // if we want the already existing data in file to remain then we use.... ios::app for appending 
    ofs<<"NALINI"<<endl;
    ofs<<11<<endl;
    ofs.close();
}
