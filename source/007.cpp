#include<iostream>
using namespace std;
int main(){
    /*
     * ����: ����sizeof�ؼ��ֿ���ͳ������������ռ�ڴ�Ĵ�С��
     * �﷨: sizeof(��������/����)
    **/
    cout << "bool ������ռ�ڴ�ռ�Ϊ�� " << sizeof(bool) <<endl;  // 1
    cout << "char ������ռ�ڴ�ռ�Ϊ�� " << sizeof(char) << endl;  // 1
    cout << "signed char ������ռ�ڴ�ռ�Ϊ�� " << sizeof(signed char) << endl;  // 1
    cout << "unsigned char ������ռ�ڴ�ռ�Ϊ�� " << sizeof(unsigned char) << endl;  // 1
    cout << "signed short ������ռ�ڴ�ռ�Ϊ�� " << sizeof(signed short) << endl;  // 2
    cout << "unsigned short ������ռ�ڴ�ռ�Ϊ: " << sizeof(unsigned short) << endl; // 2
    cout << "int ������ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << endl;  //4
    cout << "unsigned  ������ռ�ڴ�ռ�Ϊ�� " << sizeof(unsigned int) << endl;  // 4
    cout << "long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long) << endl;  //4
    cout << "unsigned long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(unsigned long) << endl;  // 4
    cout << "long long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long long) << endl;  // 8
    cout << "unsigned long long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(unsigned long long) << endl;  // 8
    cout << "float ������ռ�ڴ�ռ�Ϊ�� " << sizeof(float) << endl;  // 4
    cout << "double ������ռ�ڴ�ռ�Ϊ�� " << sizeof(double) << endl;  // 8
    cout << "long double ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long double) << endl;  // 12
    return 0;
}
