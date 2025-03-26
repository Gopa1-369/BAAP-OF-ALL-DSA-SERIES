#include<iostream>
using namespace std;

//output of given program
// int main(){
//       int a=4;
//       int b=5;
//       a++ , b-;    //here is b- which is not exist in c++ operator
//       cout << ++a <<" " <<b--;
// }

//   output : expected primary-expression before ';' token    
//   because here is b- which is not exist in c++ operator



//correct program should be
int main(){
    int a=4;
    int b=5;
    a++, b--;   
    cout << ++a <<" "<<b--;
}

// output: 6 4
