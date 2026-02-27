#include <iostream>
using namespace std;

int main() {
    int x[5]= {4,6,3,6,9};
     int sum=0;
    for(int i=0;i<=4;i++){
        
         sum +=x[i];
         cout<<sum; 
    }
    return 0;
}