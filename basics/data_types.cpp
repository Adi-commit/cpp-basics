//program to understand different data types available in C++
#include<iostream>
#include <climits>
#include <limits>
using namespace std;

int main(){
    //BASIC DATA TYPES: int, float, double, char, bool, void
    //int is used to store integer numbers
    //float is used to store decimal numbers
    //double is used to store decimal numbers with higher precision
    //char is used to store a character of english alphabets
    //bool is used to store true or false value
    //void denotes the absence of any value, it used for funtions and pointers

    //creating an integer value
    int a = INT32_MAX; //assigning maximum value possible for 32 bit systems
    int b = INT32_MIN; //assigning minimum value possible for 32 bit systems
    int c = sizeof(a); //finding the size int takes in system
    cout<<"The max int (64 bit) value possible is "<<a<<endl<<"The min int (64 bit) value possible is "<<b<<endl<<"The size of int is "<<c<<" bytes"<<endl;

    float d = numeric_limits<float>::max(); //assigning maximum value possible for float
    float e = numeric_limits<float>::min(); //assigning minimum value possible for float
    c = sizeof(d); //finding the size float takes in system
    cout<<endl<<"The max float value possible is "<<d<<endl<<"The min float value possible is "<<e<<endl<<"The size of float is "<<c<<" bytes"<<endl;

    double f = numeric_limits<double>::max(); //assigning maximum value possible for double
    double g = numeric_limits<double>::min(); //assigning minimum value possible for double
    c = sizeof(f); //finding the size double takes in system
    cout<<endl<<"The max double value possible is "<<f<<endl<<"The min double value possible is "<<g<<endl<<"The size of double is "<<c<<" bytes"<<endl;

    char h = CHAR_MAX; //assigning maximum value possible for char (127)
    char i = CHAR_MIN; //assigning minimum value possible for char (-128)
    c = sizeof(h); //finding the size char takes in system
    cout<<endl<<"The max char value possible is "<<h<<endl<<"The min char value possible is "<<i<<endl<<"The size of char is "<<c<<" bytes"<<endl;

    //bool holds only 2 value true(1) or false(0)
    bool j = true; //assigning true
    bool k = false; //assigning false
    c = sizeof(j); //finding the size bool takes in system
    cout<<endl<<"The variable j holds value "<<j<<endl<<"The variable k folds value "<<k<<endl<<"The size of bool is "<<c<<endl;
}