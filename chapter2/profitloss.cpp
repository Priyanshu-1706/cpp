#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the cost price of product:";
    int cp;
    cin>>cp;
     cout<<"Enter the sell price of product:";
    int sp;
    cin>>sp;
    if(cp>sp) cout<<"the total loss is"<<cp-sp;
    if(cp<sp)cout<<"the total profit is"<<sp-cp;
    if(cp==sp)cout<<"no profit and no loss";
     
   

    return 0;
}