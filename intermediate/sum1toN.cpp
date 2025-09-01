//program to find sum of 1 to n numbers
#include<iostream>
using namespace std;

//function to calculate sum of 1 to n
int sum(int a){
    if(a==1) return a; //base case
    return a + sum(a-1); //work + call || sum =  n +(n-1)+(n-2)..... >> sum = n + sum(n-1)
}

//main function
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<sum(n); //calling the recursive function
}