#include <iostream>
using namespace std;

int powi(int n,int p){
    if(p==0) return 1;
    return n * powi(n,p-1);
}

int main() {
    int n;
    cout<<"enter the base";
    cin>>n;
    int p;
    cout<<"enter the power";
    cin>>p;
    cout<<powi(n,p);
    return 0;
}