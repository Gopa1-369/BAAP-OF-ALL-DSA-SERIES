#include<iostream>
using namespace std;


// What will be the output of the following code?

int main(){
    int a = 20, b = 6, c = 4;
     
    //right side, numerator is small and denominator is big so numerator is answer of c % a;

    cout << a % b + c % a;   
    return 0;
}

// output:6