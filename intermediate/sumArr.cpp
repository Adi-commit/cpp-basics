//program to find the sum of all the elements of array
#include<iostream>
using namespace std;

//main function
int main(){
    int arr[] = {1,2,3,4}; //initialization and assignment
    int sum=0; //variable to store sum
    int size = sizeof(arr)/sizeof(arr[0]); //finding size of array
    //printing the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //calculating the sum
    for(int i=0;i<=3;i++){ 
        sum+=arr[i];
    }
    cout<<sum;
}