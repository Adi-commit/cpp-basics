//program to calculate nCr (combination) of a given number n
#include<iostream>
using namespace std;

//factorial function
int fact(int n){
    int f = 1;
    //for loop to multiply and store the result with itself till n
    for(int i = 1; i<=n; i++){
        f *= i;
    }
    return f;
}

//main function to call factorial function and calculate combination
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n; //taking n
    int r;
    cout<<"Enter r: ";
    cin>>r; //taking r
    cout<<(fact(n))/((fact(r))*(fact(n-r))); //calling factorial function to calculate combinations
}