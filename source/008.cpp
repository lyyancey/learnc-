#include<iostream>
using namespace std;
int main(){
    // 单精度float  4字节   7位有效数字
    // 双精度double 8字节   15~16位有效数字
    float f1 = 3.14f;
    double d1 = 3.14;
    cout << f1 << endl; // 3.14
    cout << d1 << endl; // 3.14
    cout << "sizeof(f1) = " << sizeof(f1) << endl; // 4
    cout << "sizeof(d1) = " << sizeof(d1) << endl; // 8
    // 科学计数法
    float f2 = 3e2; // 3*10^2
    cout << "f2 = " << f2 << endl; // 300
    float f3  = 3e-2; // 3*0.1^2
    cout << "f3 = " << f3 << endl; // 0.03
    float f4 = 3e-4;
    cout << "f4 = " << f4 << endl;  // 0.0003
    float f5 = 3e-5;
    cout << "f5 = " << f5 << endl;  // 3e-5
    float f6 = 3e-10;
    cout << "f6 = " << f6 << endl;  // 3e-10
    return 0;
}