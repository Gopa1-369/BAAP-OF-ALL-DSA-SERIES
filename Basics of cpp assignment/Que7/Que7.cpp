#include<iostream>
using namespace std;

// Take an integer between 65 and 90 as input and print its corresponding uppercase letter

int main(){
    
    for (int i = 65; i<=90;i++) {
        cout << "The ASCII value is: "<< i<<endl;
        cout << "the ASCII value corresponding letter is: "<<(char)i<<endl;

    }

}