//program to go from 1 to nth number
#include<iostream>
using namespace std;

//function if we already know the number we want to achieve
int printn(int n){
    if(n==5) return n; //base case
    cout<<n<<endl; //work
    printn(n+1); //call
}

//recurssion function for when we want the user to give a number
int print(int n){
    if(n==0) return n; //base case
    print(n-1); //call
    cout<<n<<endl; //work
}

//main function to call print function
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    printn(1); //calling function
    print(n); //calling function
}