#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"enter third number";
    cin>>c;
    if(a<b & a<c)
    cout<<"a is least number";
    else if (c<a && c<b)
    cout<<"c is least number";
    else 
    cout<<"b is least number";


    return 0;
}