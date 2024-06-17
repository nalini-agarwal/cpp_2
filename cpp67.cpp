//ex of static memory usage 

#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    static int adminNo;
    student(){
        adminNo++;
        rollno=adminNo;
    }
};
int student:: adminNo=0;
int main(){
    student s1;
    cout<<s1.rollno<<endl;
    student s2;
    cout<<s2.rollno<<endl;
    return 0;
}