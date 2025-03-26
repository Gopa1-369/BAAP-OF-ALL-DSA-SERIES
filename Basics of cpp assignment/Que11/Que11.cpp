#include<iostream>>
using namespace std;

//  What will be the output of the following code?


int main(){
   int a = 3, b = 5 , c;
   c = a++ + ++b;
   cout << a << " " <<  b << " " << c;
}

// output : 4 6 9