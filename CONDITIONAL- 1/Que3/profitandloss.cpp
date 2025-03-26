
#include<iostream>
using namespace std;


//if cost price and selling price of an item is input through the keyboard.Write a program to determine whether the seller has made profit or incurred loss.Also determine How much profit he made or loss he incurred loss.

int main(){
    int cost,sell;

    cout << "Enter the making cost of product: ";
    cin >> cost;

    cout << "Enter the selling cost of product: ";
    cin >> sell;

    if(cost < sell){
        cout << "You make a profit "<<endl;
        int profit = sell- cost;
        cout << "You make a profit of rupees: "<<profit;
    }else if(cost == sell){
          cout << "You   make neither profit nor loss";
    }else{
        cout << "you make a loss "<<endl;
        int loss = cost - sell;
        cout << "You make a loss of rupees: "<<loss;
    }
}