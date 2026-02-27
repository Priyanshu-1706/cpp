#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n], rev[n];

    // input array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // copy in reverse
    for(int i = 0; i < n; i++){
        rev[i] = arr[n-1-i];
    }

    // print reversed array
    for(int i = 0; i < n; i++){
        cout << rev[i] << " ";
    }

    return 0;
}