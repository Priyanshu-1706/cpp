#include <iostream>
using namespace std;

int main() {
    cout<<"enter the number for highest common factor:";
    int n;
    cin>>n;
    int f=1;
    for(int i=n/2;i>=1;i--){
    if(n%i==0) f=i;
    break;
    }
    cout<<f;
   
    return 0;
}