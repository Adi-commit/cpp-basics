//program to find the maximum number in an array
#include<iostream>
using namespace std;

//main function
int main(){
    int arr[] = {12,8,17,90,100,70}; //giving array values manually
    int mx = arr[0]; //assigning the first term as min value || can also use INT_MIN
    int size = sizeof(arr)/sizeof(arr[0]); //calculating size of array

    //printing the array
    for(int i=0; i<size; i++){ 
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    //for loop to find the max value
    for(int i = 1; i<size; i++){
        //if(arr[i]>mx) mx = arr[i];
        mx = max(mx,arr[i]);
    }
    cout<<mx; //printing the max value
}