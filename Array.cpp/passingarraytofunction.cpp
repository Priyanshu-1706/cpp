#include <iostream>
using namespace std;

void change(int arr[]) {
    arr[2] = 6;
}

int main() {
    int arr[4] = {1, 2, 3, 4};

    for(int i = 0; i < 4; i++) {
        cout << arr[i] << endl;
    }

    change(arr);

    cout << "After change:" << endl;

    for(int i = 0; i < 4; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}