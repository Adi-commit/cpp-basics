//program to create an array of squares of all numbers till n
#include<iostream>
using namespace std;

//main function
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n; //taking the value of n
    int arr[n]; //initialising array of size n
    //for loop to store the squares of whole number till n
    for(int i = 0; i<n; i++){
        arr[i] = (i+1)*(i+1);
    }
    //printing the array
    for(int i=0; i<n; i++){ 
        cout<<arr[i]<<" ";
    }
}