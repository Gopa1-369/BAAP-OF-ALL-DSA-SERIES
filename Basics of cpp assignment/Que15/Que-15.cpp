#include<iostream>
using namespace std;


// Write a program to find the sum of squares of first n natural numbers where n will be provided by the user.
int main(){
     int n;
     cout << "enter the number: ";
     cin >> n;

     int sum=0;

     for(int i=1;i <= n;i++){
        sum+=i * i;
       
     }

     cout << "Sum of squares of first n natural numbers: " << sum << endl;
}

//key learning from wrong code
// for(int i=1;i <= n;i++){
//     int c=0;

       //here i'm direct change iteration variable here so next iteration not start with sequencly   
       //but it start with inside loop chagee iteration varible's next value  
       //which is not expected result of question
//     i = i*i;

       //in every iteration c become 0  so the sum logic not work becuse of scope of varible inside loop
       //therefore we devalre varible outside loop 

//     c = c+i;

//     cout << c;
// }