#include<iostream>
using namespace std;

// What will be the output of the following code?

int main(){
    int x =0, y = 10;
    bool result = (x != 0) && (y / x > 2);
    cout << result;
    return 0;
}

// output : 0