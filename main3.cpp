#include <iostream>
using namespace std;
/* �������� ��������� ����������� ��������� �������
��� ������� a^b �� c. � ��������� �������������, ���
����� a � c �����, b - ����������� � �� �����������
�� ������ 10000. � ��������� ����������� ������������
�������� **(���������� � �������). ���������� ����
������������� ���������� �� ������ ������������ 100000000 */
int main()
{
int a, b, c, s;
cin >> a >> b >> c;
for (int i=1; i<=b; i++){
s = a % c;
a = a * s;
}
cout << s;
return 0;
}
