#include<iostream>
#include<cmath>
using namespace std;

// Write a program to find the euclidean distance between two coordinates.Take both
// the coordinates from the user as input.

int main(){
   int x1,x2,y1,y2,distance;

   cout << "Enter x1 coordinate:  "<<endl;
   cin >> x1;

   cout << "Enter x2 coordinate:   "<<endl;
   cin >> x2;

   
   cout << "Enter y1 coordinate:   "<<endl;
   cin >> y1;

   
   cout << "Enter y2 coordinate:   "<<endl;
   cin >> y2;

   
   distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

   cout << "Euclidean Distance: " << distance << endl;
}