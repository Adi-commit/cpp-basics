//program to print the power of a raised to b (optimised solution)

/*pow(a,b) = a*pow(a,b-1)

pow(3,4) = 3*(pow(3,3)) >> pow(3,3) = 3*(pow(3,2)) 
>> pow(3,2) = 3*(pow(3,1)) >> pow(3,1) = 3*(pow(3,0))
>> pow(3,0) = 1 (this is the last step, total = 5)
*/

/*optimised method (logarithmic, pow(a,b)=pow(a,b/2)*pow(a,b/2))

pow(3,4) = pow(3,2)*pow(3,2) >> pow(3,2) = pow(3,1)*pow(3,1) 
>> pow(3,1) = 3 (this is the last step, total = 3)
*/
#include<iostream>
using namespace std;

//function to get power
int pow(int a, int b){
    if(b==1) return a; //base case || anything raised to power 1 is number itself
    if(b%2==0) return pow(a,b/2)*pow(a,b/2); //work+call incase the power is even
    else return a*pow(a,b/2)*pow(a,b/2); //work+call incase the power is odd
}

//main function
int main(){
    int a;
    cout<<"Enter base: ";
    cin>>a; //taking the value of base
    int b;
    cout<<"Enter power: ";
    cin>>b; //taking the value of power
    cout<< pow(a,b);   
}