#include<iostream>
using namespace std;

int main(){
    int a = 5;
    a = a + 6;     //shortcut a +=6
    cout << "additon " << a <<endl;

    a = a - 2;      //shortcut a-=2
    cout << "substraction " << a <<endl;


    a = a * 2;       //shortcut a*=2
    cout << "multiply " << a << endl;

    a = a / 2;        //shortcut a/=2
    cout << "division " << a << endl;

     
    a = a % 2;        //shortcut a%=2
    cout << "modulo " << a << endl;

    

}