                  //NESTED IF ELSE

                
#include<iostream>
using namespace std;

// Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15

int main(){
    int num;

    cout << "Enter the Number : ";
    cin >> num;

    // if((num % 3 == 0 || num % 5 == 0) && num % 15 != 0){
    //     cout << "Number is divisible by either 5 or 3 but not by 15 ";
    // }else{
    //     cout << "Enter by 3 and 5 divisible and not by 16 divisible";
    // }


    //NESTED IF ELSE
    if(num % 3 == 0 || num % 5  == 0){
        cout << "The number is divisible by either 3 or 5 "<<endl;
        if(num % 15 != 0){
            cout << "number is not divisible by 15";
        }else{
            cout << "number is divisible by 15";
        }
    }else{
        cout << "The number is divisible by  neither 3 nor 5 nor 15";
    }

}