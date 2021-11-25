#include<iostream>
using namespace std;
int main(){
    // 作用: 用于根据表达式的值返回真值或假值。

    // !(非) 只有0和非0两种值 真变假， 假变真
    int a = 10;
    cout << !a << endl; // 0
    cout << !!a << endl; // 1

    // &&(逻辑与) 同真为真， 其余为假。
    int x = 10, y=10;
    cout << (x&&y) << endl; // 1

    x = 10;
    y = 0;
    cout << (x && y) << endl; // 0

    x = 0;
    y = 0;
    cout << (x && y) << endl; // 0

    // ||(逻辑或) 同假为假， 其余为真
    x = 10;
    y = 10;
    cout << (x || y) << endl; // 1

    x = 10;
    y = 0;
    cout << (x || y) << endl; // 1

    x = 0;
    y = 0;
    cout << (x || y) << endl; // 0

    return 0;
}
