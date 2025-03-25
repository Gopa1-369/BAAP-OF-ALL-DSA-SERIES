#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    //only store integer ex:1,2,3 
    //if we write 5.34 so .34 ignore
    int a=5;
    cout<<a<<endl;

    //only store decimal value ex:1.2,3.4
    float b=8.33 ;
    cout<<b<<endl;

    //her 8 is integer and we use with flaot datatype
    // so ouput is is form of deciaml which is  8.0 
    // Since 8 is an integer, k stores it as 8.0, but cout by default removes trailing zeros.
    // solution to print 8.0 is   cout << fixed << setprecision(1);  befor cout<<k   and on top #include <iomanip>
    float k =8;
    cout << fixed << setprecision(1);
    cout<< k;

    char c='^';
    cout<<c<<endl;

// here 65 converted in character A based on ASCII representation
//in ASCII representation ASCII value 65 character value is A
    char d = 65;
    cout<<d;

//if we write 8.5 so there is no output with no error and also remove previous d 
 
                    char e = 8.5;
                      cout<<e;

//beacus char can only store integer values (0-255 in ASCII)
// 8.5 is a floating-point number (decimal).
// char e = 8.5; → The .5 part is truncated (ignored), and only 8 is stored.
// ASCII 8 is a non-printable control character (Backspace)
// char e = 8.5; stores 8, which is the Backspace (\b) character in ASCII.
// When cout << e; executes, it erases the previous character (B from d), making it seem like d never printed.
// Backspace (\b) removes the last printed character from the console.

//solution: Use only printable ASCII values (32-126) for visible output

   


}