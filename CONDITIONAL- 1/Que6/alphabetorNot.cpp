
#include<iostream>
using namespace std;

// write a program to check whether a character is an alphabet or not


int main(){
    char ch;
    cout << "Enter the alphabet : ";
    cin >> ch;
      
    int ascii = (int)ch;
  if(ascii >= 97 && ascii <= 122 || ascii >=65 && ascii <= 90){
    cout << "Given character is English alphabet";
  }else{
    cout << "Given character is not English alphabet";
  }
}