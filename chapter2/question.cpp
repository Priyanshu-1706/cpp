#include <iostream>
using namespace std;

int main() {
    cout<<"lenth of the rectangle";
    int L;
    cin>>L;
    cout<<"breadth of the rectangle";
    int B;
    cin>>B;
    if(L*B==2*(L+B))
    cout<<"area of rectangle is equal to it's perimeter";
    else if(L*B<=2*(L+B))
    cout<<"perimeter is greater than its area";
    else
    cout<<"area is greater than its perimeter";

    return 0;
}