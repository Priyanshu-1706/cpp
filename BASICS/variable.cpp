#include <iostream>
using namespace std;

int main() {
    int x = 5, y=7;
    cout<<x+y<<endl;//x ki value 12 
    x=x+12;
    cout<<x<<endl; //x ki value17
    x=x+1;
    cout<<x<<endl; //x ki value 18 
    x=x+y+99; 
    cout<<x<<endl;
    x=x/y;
    cout<<x;


    return 0;
}