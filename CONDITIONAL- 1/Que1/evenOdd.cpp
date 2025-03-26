#include<iostream>
using namespace std;

//Que:  Take input and tell a number is even or odd


int main(){
     int input;

     cout << "Enter the integer number: ";
     cin >> input;

     if(input % 2 == 0){
        cout << "Given number is even";
     }else{
        cout << "Given number is odd";
     }
}