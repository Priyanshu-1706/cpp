#include <iostream>
using namespace std;

int main() {
    int arr[2][3];
    arr[0][0]=3;
    arr[0][1]=4;
    arr[0][2]=4;
    arr[1][0]=8;
    arr[1][1]=3;
    arr[1][2]=7;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    

    return 0;
}