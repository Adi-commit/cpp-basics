//program to check if array is pass by value or pass by reference
#include<iostream>
using namespace std;

//function to change the 0th index to value 9
void change(int x[]){
    x[0] = 9;
}

//main function
int main(){
    int arr[] = {1,2,3,4}; //initialization and assignment
    //printing the array
    for(int i=0;i<=3;i++){ 
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr); //calling the function
    //printing updated array
    for(int i=0;i<=3;i++){
        cout<<arr[i]<<" ";
    }
    //array is pass by reference always
}