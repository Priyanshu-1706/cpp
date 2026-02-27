#include <iostream>
using namespace std;

int main() {
    cout<<"enter the n numbers:";
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i+=2)
    cout<<i;
    return 0;
}