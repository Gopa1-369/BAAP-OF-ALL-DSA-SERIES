
             // Multiple condition using && and ||


#include<iostream>
using namespace std;

// take positive integer input and tell if it is a three-digit number or not

int main(){
    int a;
    cout <<"Enter the number: ";
    cin >> a;

    if(a>=100 && a<=999){
        cout <<"The number is Three digit number";
    }else{
      cout << "The number is not three digit number";
    }
      
}