#include<iostream>
using namespace std;
int main(){
    // 作用 ：布尔数据类型代表真或假的值
    // bool 类型只有两个值：
    // true --- 真(本质是1)
    // false -- 假(本质是0)
    // bool类型占一个字节大小
    bool flag = true;
    cout << flag << endl; // 1

    flag = false;
    cout << flag << endl; // 0
    cout << (flag == 0) << endl; // 1
    cout << "size of bool = " << sizeof(bool) << endl;  // 1
    return 0;
}