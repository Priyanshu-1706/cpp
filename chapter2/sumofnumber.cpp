#include <iostream>
using namespace std;

int main() {
    cout<<"enter the number:";
    int n;
    cin>>n;
    int sum=0;
        while(n!=0){
            int ld=n%10;
            
            n=n/10;
            sum+=ld ;
        }    
        cout<<sum;
    return 0;
}