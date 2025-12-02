#include<iostream>
using namespace std;
int main(){
    int price[]={7, 1, 2, 6, 4, 5};
    int size = 6;
    int best_buy = price[0];
    int max_profit = 0;
    for(int i = 0; i < size; i++)
    {
        if(price[i] > best_buy)
        {
         max_profit = max(max_profit,price[i] - best_buy);
        }
      best_buy = min(best_buy, price[i]);
    }
     cout<<"The best buy is "<<max_profit;
    return 0;

}
