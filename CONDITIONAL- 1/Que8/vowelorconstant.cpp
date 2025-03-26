                                                //  NESTED IF ELSE



#include<iostream>
using namespace std;

//write a program to check whether a given character is a vowel or a constant 

int main(){
    char ch;

    cout << "Enter the character : ";
    cin >> ch;


    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
            cout << "Given character is Vowel";
        }else{
            cout << "Given character is a Consonant";
        }
    }else{
        cout << "Enter a valid character";
    }


}