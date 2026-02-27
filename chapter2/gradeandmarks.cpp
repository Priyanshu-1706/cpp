#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the marks of student:";
    float x;
    cin>>x;
    if(x<=40)
    cout<<"try again (fail)";
    else if(x>40 & x<=60)
    cout<<"average marks";
    else if(x>60 & x<=80)
    cout<<"Good marks";
    else
    cout<<"very good marks";



    return 0;
}