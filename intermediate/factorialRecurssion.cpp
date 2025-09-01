//program to calculate factorial using recurssion
#include <iostream>
using namespace std;

//function to calcualte factorial
int fact(int a){
    if(a==1) return a; //base case
    return a*fact(a-1); //work + call || fact = a*(a-1)*(a-2)... >> fact = a*fact(a-1)
}

//main function
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n; //taking n
    cout<<fact(n); //calling fact function
}