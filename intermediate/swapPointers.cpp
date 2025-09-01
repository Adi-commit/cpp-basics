//program to swap 2 numbers and need of pointers
#include<iostream>
using namespace std;

//function to swap 2 numbers
//instead of creating new memory storage we will be directly taking the value (pass by reference)
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
}

//main function
int main(){
    int a;
    cout<<"Enter a:";
    cin>>a;
    int b;
    cout<<"Enter b:";
    cin>>b;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b;
}