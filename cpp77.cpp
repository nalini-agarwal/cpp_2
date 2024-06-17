//serialization (writting)
#include<iostream>
#include<fstream>
using namespace std;
class student{
    public:
        string name;
        int rollno;
        string branch;
        friend ofstream & operator<<(ofstream &ofs, student &s); //we are creating a friend function that will override the insertion operator on a file to make it an object. 
};
ofstream & operator<<(ofstream &ofs, student &s){
    ofs<<s.name<<endl;
    ofs<<s.rollno<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}
int main(){
    student s1;
    s1.name="diya"; s1.rollno=11; s1.branch="CSE";
    ofstream ofs("student.txt", ios::trunc);
    ofs<<s1; 
    ofs.close();
}