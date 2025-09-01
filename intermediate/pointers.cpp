//program to understand the basics of pointers in c++
#include<iostream>
using namespace std;

//main function
int main(){
    int x = 3;
    int* p = &x; //int* is the data type to store the address
    cout<<x<<endl; //3
    cout<<&x<<endl; //address of x in memory
    cout<<p<<endl; //stores address of x
    cout<<*p<<endl; //returns value stored in address, also called star operator(dereference)
}