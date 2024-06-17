#include<iostream>
using namespace std;
int search(int A[], int n, int key){
    for(int i=0;i<n; i++){
        if(key==A[i]){
            return i;
        }
    }
    return 0;
}
int main(){
    int A[ ]={00,10,20,30,40,50,60,70,80,90};
    int key;
    cout<<"enter the element to be searched"<<endl;
    cin>>key;
    int index= search(A, 10, key);
    cout<<"the element is found at "<<index<<endl;
    return 0;
}
