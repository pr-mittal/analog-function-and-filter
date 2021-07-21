#include<iostream>
using namespace std;
int main(){
    float q=50;
    float fc=110;
    float af=10;
    float c=1e-6;
    float r1=(q)/(2*3.141*fc*c*af);
    float r3=(q)/(3.141*fc*c);
    float r2=(q)/(2*3.141*fc*c*(2*q*q-af));
    cout<<"r1="<<r1<<" r2="<<r2<<" r3="<<r3;
}