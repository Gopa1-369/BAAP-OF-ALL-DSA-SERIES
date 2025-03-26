#include<iostream>
using namespace std;

// What will be the output of the following code?

int main(){
    int x = 5, y = 3;
    // & is bitwise operater convert x and y value in binary and perform between them &operation

    //x && y there is no condition but it is valid becuse any nonzero number treate as true
    cout << (x & y) << " " << (x && y);
    return 0;
}

// output: 1 1