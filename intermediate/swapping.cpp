//program to swap to numbers without using pointers and functions
#include<iostream>
using namespace std;

//main function
int main(){
    int a;
    cout<<"Enter a:";
    cin>>a;
    int b;
    cout<<"Enter b:";
    cin>>b;
    cout<<a<<"  "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<"  "<<b;
}