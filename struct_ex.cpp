#include <iostream>
using namespace std;

struct mango{
    int a;
    int b;
};

int main(){
    mango obj;
    obj.a = 10;
    obj.b = 20;
    cout << "A value : " << obj.a << endl;
    cout << "B value : " << obj.b << endl;
    cout << "A Address : " << &obj.a << endl;
    cout << "B Address : " << &obj.b << endl;
}