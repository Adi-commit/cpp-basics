//program to print the power of a raised to b
#include<iostream>
using namespace std;

//function to get power
int pow(int a, int b){
    if(b==0) return 1; //base case || anything raised to power 0 is 1
    return a*pow(a,b-1); //work+call || a^b = a*(a^(b-1)) >> pow(a,b) = a*pow(a,b-1)
}

//main function
int main(){
    int a;
    cout<<"Enter base: ";
    cin>>a; //taking the value of base
    int b;
    cout<<"Enter power: ";
    cin>>b; //taking the value of power
    cout<<pow(a,b); //calling the power function
}