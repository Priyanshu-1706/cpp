#include <iostream>
using namespace std;

int main() {
    cout<<"enter the number :";
    int x;
    cin>>x;
    if(x%3==0 && x%5==0)
    cout<<"this number is divisible by both 3 and 5";
    else
    cout<<"its not divisible by 3 and 5";
    return 0;
}