#include<iostream>
using namespace std;



//this code have syntax mistake
//this code give errpr
// int main(){
//     int x=4 y=2 z;
//     z = x++ * --y + ++x;
//     cout << x << " "<<y << " " << z;
// }




//coreect code should be
   int main(){
    int x=4,y=2,z;
    z = x++ * --y + ++x;
    cout << x << " " <<y << " "<<z;
   }

//    output: 6 1 10
