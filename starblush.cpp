#include <iostream>
using namespace std;

int main() {
    cout<<"enter the column:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==3 or j==3)cout<<"*  ";
            else cout<<"#  ";
        
        }
        cout<<endl;
    }

    
    return 0;
}