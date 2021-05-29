#include <iostream>
using namespace std;

class class_ex{
private:
    int a = 10;
public:
    void display(){
        cout << " A value : " << a << endl;
    }
};

int main(){
    class_ex obj;
    obj.display();
}