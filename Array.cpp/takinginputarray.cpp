#include <iostream>
using namespace std;

int main() {
    int x[5];
    cout<<"enter array element";

    for(int i=0;i<=4;i++){
        cin>>x[i];
    }
    for(int i=0;i<=4;i++){
        cout<<x[i]<<" ";
    }
        return 0;
}