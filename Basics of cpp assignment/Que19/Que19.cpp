#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 5;
    // Assignment operators are evaluated from right to left
    int c = a +=b -=2;
    cout << a << " " << b << " " << c;
    return 0;

}

// output : 13 3 13