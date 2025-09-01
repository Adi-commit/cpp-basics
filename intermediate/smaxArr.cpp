//program to find the second maximum number in an array
#include<iostream>
#include <climits>
using namespace std;

//main function
int main(){
    int arr[] = {12,8,17,90,100,70}; //giving array values manually
    int mx = arr[0]; //assigning the first term as min value || can also use INT_MIN
    int smx = INT_MIN; //assigning INT_MIN as min value
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

    //for loop to find the second max value
    for(int i = 1; i<size; i++){
        if(arr[i] != mx) smx = max(smx,arr[i]);
    }
    cout<<smx; //printing the second max value
}