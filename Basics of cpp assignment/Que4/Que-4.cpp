#include<iostream>
using namespace std;

// Take input of principle, time and rate and find the simple interest


int main(){
    int principle , time , rate;

    cout << "Enter the amount of principle : "<<endl;
    cin >> principle;

    cout << "Enter the time duration :"<<endl;
    cin >> time;

    cout << "enter the intrest rate  :"<<endl;
    cin >> rate;

    int c = principle  * time * rate /100;
    
    cout << "The intrest amount is :" << "rupee"<< c;
    
}