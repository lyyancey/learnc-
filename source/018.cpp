#include<iostream>
using namespace std;
int main(){
    // 赋值运算符
    // 作用: 用于将表达式的值赋给变量
    // =
    int a = 10;
    a = 100;
    cout << "a = " << a << endl;

    // +=
    a = 10;
    a += 2; // a = a+2;
    cout << "a = " << a << endl;

    // -=
    a = 10;
    a -= 2; //a = a-2;
    cout << "a = " << a <<endl;

    // *=
    a = 10;
    a *= 2; a = a*2;
    cout << "a = " << a << endl;

    // /=
    a = 10;
    a /= 2; //a = a/2;
    cout << "a = " << a << endl;

    // %=
    a = 10;
    a %= 2; // a = a % 2;
    cout << "a = " << a << endl;


    return 0;
}
