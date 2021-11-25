#include<iostream>
using namespace std;
int main(){
    // 比较运算符
    // 作用:用于表达式的比较，并返回一个真值或假值。
    // 注意：C和C++语言的比较运算中， "真"用数字1来表示，"假"用数字0来表示。
    int a = 10;
    int b = 20;
    cout << (a==b) << endl; //0
    cout << (a!=b) << endl; //1
    cout << (a>b) << endl; //0
    cout << (a<b) << endl; //1
    cout << (a>=b) << endl; //0
    cout << (a<=b) << endl; //1
    return 0;
}