#include <iostream>
using namespace std;

int main() {
        cout<<"enter the number:";
    int n; 
    cin>>n;
    for(int i=2;i<=n-1;i++)
    if(n%i==0){cout<<"yes this composite number";
    break;}
    return 0;
}