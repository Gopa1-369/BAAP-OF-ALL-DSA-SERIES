#include<iostream>
using namespace std;

// Given 2 fractions, find the sum of those 2 fractions.Take the numerator and denominator values of the fractions from the user.

int main(){
    float nume1 , deno1 , nume2, deno2;

    cout << "Enter the first numerator: "<<endl;
    cin >> nume1;

    cout << "Enter the first denominator: "<<endl;
    cin >> deno1;

    cout << "Enter the second numerator: "<<endl;
    cin >> nume2;


    cout << "Enter the second denominator: "<<endl;
    cin >> deno2;


    float fraction = (nume1/deno1) + (nume2/deno2);

    cout << "sum of the two fraction is: " <<fraction;




}