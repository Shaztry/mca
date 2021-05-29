#include <iostream>
using namespace std;

union apple{
    int a;
    int b;
};

int main(){
    apple obj;
    obj.a = 10;
    cout << "A value : " << obj.a << endl;
    cout << "B value : " << obj.b << endl;
    cout << "A Address : " << &obj.a << endl;
    cout << "B Address : " << &obj.b << endl;
}