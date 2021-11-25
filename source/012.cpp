#include<iostream>
#include<string>
using namespace std;
int main(){
    // 作用 ：用于表示一串字符
    //两种风格
    // 1. C风格字符串 ： char 变量名[] = "字符串值";
    // 注意 C风格的字符串要用双引号引起来
    char str1[] = "hello world!";
    cout << str1 << endl;
    // 2. C++ 风格的字符串：string 变量名 = "字符串值";
    // 注意 C++风格的字符串需要引入头文件 ： #include<string>
    string str = "hello world!";
    cout << str << endl;
    return 0;
}
