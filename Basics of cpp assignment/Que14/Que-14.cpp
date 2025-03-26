#include<iostream>
using namespace std;

// Write a program that will tell the number of dogs and chicken are there when the user will provide the value of total heads and legs.
// For example:
// Input: heads -> 4 legs -> 12
// Output: dogs -> 2 chicken -> 2


int main(){
    int heads ,legs;

    cout << "Enter the number of heads: ";
    cin >> heads;

    cout << "Enter thr number of legs: ";
    cin >> legs;
  
     
    int chickens = ((4*heads) - legs)/2;
    cout << "Number of chicken is: " << chickens<<endl;

    int dogs = heads - chickens;
    cout << "Number of Dogs is: " << dogs<<endl;


}