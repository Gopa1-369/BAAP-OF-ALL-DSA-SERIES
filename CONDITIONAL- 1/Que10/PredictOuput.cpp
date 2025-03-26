
#include<iostream>
using namespace std;


//what should be output of below c++ program if user enters a = 5


int main(){
    int a;
    cout << "Enter the value: ";
    cin>>a;    //users ca enter any value

    if(++a*5 <= 25){
        cout << "Hello";
    }else{
        cout << "Bye";
    }
}

//Output : if user enter 5 
        // so output is else part Bye