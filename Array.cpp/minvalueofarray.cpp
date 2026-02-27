#include <iostream>
using namespace std;

int main() {
    int arr[] = {41, 78, 10, 99, 33};
    int n = 5;

    int min = arr[0];   // assume first element min

    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Minimum element: " << min;
    return 0;
}