#include<iostream>
#include<string>
using namespace std;
int main(){
    // ���� : ���ڴӼ��̻�ȡ����
    // �ؼ��� ��cin
    // �﷨ : cin >> ����

    // ��������
    int a = 0;
    cout << "���������ͱ���: ";
    cin >> a;
    cout << a << endl;

    // ����������
    double b = 0.0f;
    cout << "�����븡���ͱ���: ";
    cin >> b;
    cout << b << endl;

    // �ַ�������
    char ch = 0;
    cout << "�������ַ��ͱ���: ";
    cin >> ch;
    cout <<ch << endl;

    // �ַ���������
    string str;
    cout << "�������ַ����ͱ���: ";
    cin >> str;
    cout << str << endl;

    // ������������
    bool  flag = true;
    cout << "�����벼���ͱ���: ";
    cin >> flag;
    cout << flag << endl;
    return 0;
}
