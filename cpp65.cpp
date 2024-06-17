//friend class

#include<iostream>
using namespace std;
class your;
class my {
    private: 
    int a;
    protected: 
    int b;
    public:
    int c;
    friend your; 
};
class your{
    public:
    my m;
    void fun(){
         m.a=10;
         m.b=20;
         m.c=30;
    }
};
int main(){
    return 0;
}