//program to understand the basics of string
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

//Main function
int main(){
    string s;
    cout<<"Enter your full name: ";
    getline(cin, s); //use getline instead of cin to take values even after space
    cout<<s;
    cout<<endl<<"Length of the string is "<<s.length()<<endl; //use s.length() to find the length of the string
    s.push_back('A'); //use s.push_back() to push a character at the end of the string
    cout<<s<<endl;
    s.pop_back(); //use s.pop_back() to pop a character from the end of the string
    cout<<s<<endl;
    s.append(" says hello!"); //use s.append() to append a string to the end
    cout<<s<<endl;
    s.clear(); //use s.clear() to empty the string
    cout<<s<<endl;
    s = s + "Empty String"; //use + operator to quickly add elements to string
    cout<<s<<endl;
    reverse(s.begin(),s.end()); //use reverse(start,end) to reverse a string
    cout<<s;
}