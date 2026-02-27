#include <iostream>
using namespace std;

int main() {
    int arr[] = {41, 78, 10, 99, 33};
    int n = 5;

    int max = arr[0];   // assume first element max

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Maximum element: " << max;
    return 0;
}