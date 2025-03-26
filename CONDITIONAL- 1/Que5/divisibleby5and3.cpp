
            //  Multiple condition using && and ||

#include<iostream>
using namespace std;

//Take positive integer input and tell if it is divisible by 5 and 3

int main(){
    int a;

    cout << "Enter the positive integer: ";
    cin >> a;

    if(a % 5 == 0 && a % 3 == 0){
        cout << "Given number is divisble by 5 and 3 ";
    }else{
        cout << "Given number is not divisble by 5 and 3";
    }


}