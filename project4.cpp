#include <iostream>
using namespace std;
/* Напишите программу вычисляющую результат остатка
при делении a^b на c. В программе гарантируется, что
числа a и c целые, b - натуральное и не превосходят
по модулю 10000*/
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
