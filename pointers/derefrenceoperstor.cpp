#include <iostream>
using namespace std;
 
int main() {
    int x=22;
    int* p;
    p=&x;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    *p=56;
    cout<<x;
    return 0;
}