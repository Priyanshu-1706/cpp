#include <iostream>
using namespace std;
 
int main() {
    int x=22;
    int* p;
    p=&x;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p;
    return 0;
}
// 0x16d3eeff8 this is adress where it store