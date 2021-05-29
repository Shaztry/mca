#include<iostream>
using namespace std;
int gcd(int n1,int n2){
    if(n1 == 0)
        return n2;
    if(n2 == 0)
        return n1;
    if(n1 > n2)
        return(gcd(n1-n2,n2));
    
    if(n2 > n1)
        return(gcd(n1,n2-n1));
    //return 0;
}
int main(){
    int n1, n2;
    cout <<"Enter two numbers: ";
    cin>>n1>>n2;
    cout<<"GCD : "<<gcd(n1,n2);
    return 0;
}