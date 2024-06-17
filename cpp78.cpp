//serialization (reading)

#include<iostream>
#include<fstream>
using namespace std;
class student{
    public:
        string name;
        int rollno;
        string branch;
        friend ifstream & operator>>(ifstream &ifs, student &s); //we are creating a friend function that will override the insertion operator on a file to make it an object. 
};
ifstream & operator>>(ifstream &ifs, student &s){
    ifs>>s.name>>s.rollno>>s.branch;
    return ifs;
}
int main(){
    student s1;
    ifstream ifs("student.txt");
    ifs>>s1; 
    cout<<"name "<<s1.name<<endl;
    cout<<"roll no "<<s1.rollno<<endl;;
    cout<<"branch "<< s1.branch<<endl;;
    ifs.close();
}