//program to print fibonacci's nth term
//1 1 2 3 5 8 13 21 34 55 89
#include<iostream>
using namespace std;

//recursive function to get the nth term of the series
int fib(int n){
    if(n==2 || n == 1) return 1; // base case || both the 1st and 2nd terms are 1
    return fib(n-1) + fib(n-2); // work+call || 3 = 2 + 1 >> fib(4) = fib(3) + fib(2) >> fib(n) == fib(n-1) + fib(n-2)
}

//main function
int main(){
    int n;
    cout<<"Enter the term taht you want: ";
    cin>>n; //taking the value
    cout<<fib(n); //calling and printing the fib function
}