#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"enter the first side:";
    cin>>a;
    cout<<"enter the second side:";
    cin>>b;
    cout<<"enter the third side:";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b)
    cout<<"yup,this is side of a triangle:";
    else
    cout<<"its is not a side of triangle ";

    return 0;
}