//program to reverse an array and store it in another array
#include<iostream>
using namespace std;

//main function
int main(){
    int arr[] = {1,2,3,4}; //initialization and assignment of first array
    int size = sizeof(arr)/sizeof(arr[0]);
    int brr[size]; //initializing second array
    int j; //variable to store the index of second array in reverse

    //printing the first array
    for(int i=0; i<size; i++){ 
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //for loop to reverse the order of array
    for(int i = 0; i<size; i++){
        j = size - 1 - i; // arr[0] = brr[3] || arr[1] = brr[2] >> i + j = size - 1 >> j = size - 1 - i
        brr[j] = arr[i];
    }

    //printing the second array
    for(int i=0; i<size; i++){
        cout<<brr[i]<<" ";
    }
}