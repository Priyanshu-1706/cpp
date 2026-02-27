#include <iostream>
using namespace std;

int main() {
    // apun ko 5 integer store krne hai
    int x[5]; //declaration 
    x[0]= 2;
    x[1]= 6;
    x[2]= 6;
    x[3]= 4;
    x[4]= 9;
    
    for(int i=0;i<=4;i++){
        cout<<x[i]<<" ";
    }
        return 0;
}