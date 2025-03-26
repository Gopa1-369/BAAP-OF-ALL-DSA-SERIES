#include<iostream>
using namespace std;

//take a number input and tell the number is divisible by 7 or not


int main(){
    int input;
    cout << "Enter you number: ";
    cin >> input;

    if(input % 7 == 0){
       cout << "number is divisible by 7";
    }else{
        cout << "number is not divisble by 7";
    }

}