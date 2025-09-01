//program to go from n number to 1
#include<iostream>
using namespace std;

//recurssion function to print n-1
int print(int n){
    if(n==0) return n; //condition
    cout<<n<<endl; //work
    print(n-1); //call
}

//main function to call print recurssion function
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(n); //calling function
}