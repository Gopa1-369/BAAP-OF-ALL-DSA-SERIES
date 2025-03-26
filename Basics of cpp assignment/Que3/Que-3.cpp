#include<iostream>
using namespace std;

// Take two numbers as input and perform addition, subtraction, multiplication, and division. Display the results.

int main(){
    int a;
    int b;

    cout << "Enter the first number:"<<endl;
    cin >> a;
    
    cout << "Enter the second number:34"<<endl;
    cin >> b;

    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;

    cout << "the addition is : "<< c<<endl;
    cout << "the substraction is :" << d <<endl;
    cout << "the multiplication is : "<< e<<endl;
    cout << "the division is :" << f<<endl;
}