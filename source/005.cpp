#include<iostream>
using namespace std;
/*
 *  ����: ���ڼ�¼�����в��ɸ��ĵ�����
 *  C++ ���峣�������ַ�ʽ
 *  1. #define �곣��: #define ������  ����ֵ
 *      - ͨ�����ļ��Ϸ����壬��ʾһ������
 *  2. const ���εı���  const �������� ������ = ����ֵ
 *      - ͨ���ڱ�������ǰ�ӹؼ���const�����α���Ϊ�����������޸�
 *
 *
**/
// 1. �곣��
#define day 7
int main(){
    cout << "һ�����ܹ��� " << day << "��" << endl;
    // day = 8; //�����곣���������޸�
    // 2. const ���α���
    const int month = 12;
    cout << "һ�����ܹ��� " << month << " ���·�" << endl;
    // month = 13; // ����
    return 0;
}
