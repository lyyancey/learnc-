#include<iostream>
using namespace std;
int main(){

    // 总结：只有整形变量可以进行取模运算
    int a1 = 10;
    int b1 = 3;
    cout << a1 % b1 << endl;
    
    int a2 = 10;
    int b2 = 20;
    cout << a2 % b2 << endl;
    
    int a3 = 10;
    int b3 = 0;
    // cout << a3 % b3 << endl; // 不能对0取余
    
    // 两个浮点数不能取余
    double d1 = 3.14;
    double d2 = 1.1;
    // cout << d1 % d2 << endl;
    
    return 0;
}