//program to calculate nPr (permutation) of a given number n
#include<iostream>
using namespace std;
int fact(int a){
    int f = 1;
    //for loop to multiply and store the result with itself till a 
    for(int i=1;i<=a;i++){
        f *= i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n; //taking n
    int r;
    cout<<"Enter r:";
    cin>>r; //taking r
    cout<<(fact(n)/(fact(n-r))); //calling fact function to return the factorial
}