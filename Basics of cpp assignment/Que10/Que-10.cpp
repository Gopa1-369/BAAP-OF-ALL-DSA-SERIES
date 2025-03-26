
// Que:Explain the difference between x++ and ++x in your own words.

//Ans:
   // x++ 
       //  -->  in x++ x is assign with previous x value and print it 
       // --> after that ++ is increase the x value in memory and save in memory but not that print 



   // ++x
       // --> in ++x  ++ means previous x value increase in meomry but not print 
       // --> then x is assign with previous increase value and print it 
     


// Que:
// • Take an integer as input and:
// • Print its value using post-increment (x++).
// • Print its value again using pre-increment (++x).



#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter the integer value: "<<endl;
    cin >> x;

    cout << "Post-increment value of Entered integer value: "<< x++ <<endl;
    cout << "Pre-increment value of Entered integer value: "<< ++x <<endl;
   

}