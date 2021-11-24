#include<iostream>
using namespace std;
int main(){
    /*
     * 作用: 利用sizeof关键字可以统计数据类型所占内存的大小。
     * 语法: sizeof(数据类型/变量)
    **/
    cout << "bool 类型所占内存空间为： " << sizeof(bool) <<endl;  // 1
    cout << "char 类型所占内存空间为： " << sizeof(char) << endl;  // 1
    cout << "signed char 类型所占内存空间为： " << sizeof(signed char) << endl;  // 1
    cout << "unsigned char 类型所占内存空间为： " << sizeof(unsigned char) << endl;  // 1
    cout << "signed short 类型所占内存空间为： " << sizeof(signed short) << endl;  // 2
    cout << "unsigned short 类型所占内存空间为: " << sizeof(unsigned short) << endl; // 2
    cout << "int 类型所占内存空间为： " << sizeof(int) << endl;  //4
    cout << "unsigned  类型所占内存空间为： " << sizeof(unsigned int) << endl;  // 4
    cout << "long 类型所占内存空间为： " << sizeof(long) << endl;  //4
    cout << "unsigned long 类型所占内存空间为： " << sizeof(unsigned long) << endl;  // 4
    cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl;  // 8
    cout << "unsigned long long 类型所占内存空间为： " << sizeof(unsigned long long) << endl;  // 8
    cout << "float 类型所占内存空间为： " << sizeof(float) << endl;  // 4
    cout << "double 类型所占内存空间为： " << sizeof(double) << endl;  // 8
    cout << "long double 类型所占内存空间为： " << sizeof(long double) << endl;  // 12
    return 0;
}
