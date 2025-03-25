#include<iostream>
using namespace std;

int main(){
    int x=8;
    int y=5;

    //EQUATO operator
    // it compare x value with y that both are same or not
    //if not same so output is false(0) 
    //if same so output is false (1)
    int z=(x==y);
    cout<<"for check same value : "<<z<<endl;


    //NOT EQUALTO operator
    //it compare x value with y that both are same or not
    //if not same so output is true(1)
    //if same so output is true(0)

    int k=(x!=y);
    cout<<"for check not same value:  "<<k<<endl;


    //greater then
    int r=(x>y);
    cout <<"x is greater value then y : "<< r<<endl;

    //less then
    int m=(x<y);
    cout << "y is  greate value then x : : "<<m<<endl;


    //logical and
    //only both true that time out is true 
    bool o = true;
    bool p = false;
     cout <<"logical and "<<(o&&p)<<endl;

   //logical or
   //pnly both value false that time out is false
    bool g = true;
    bool j = false;
    cout << "logical or "<<(g||j);


}