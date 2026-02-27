#include <iostream>
using namespace std;

int power(int n,int p){
    if(p==0) return 1;

    int half = power(n,p/2);

    if(p%2==0) 
        return half * half;
    else 
        return n * half * half;
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
    return 0;
}
