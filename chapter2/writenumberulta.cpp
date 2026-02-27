#include <iostream>
using namespace std;

int main() {
    cout<<"write number here";
    int n;
    cin>>n;
    int r=0;
    while(n!=0){
        int ld =n%10;
        r *=10;
        r +=ld;
        n /=10;

    }
    cout<<r;


    return 0;
}