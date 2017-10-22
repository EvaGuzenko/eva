/*Напишите программу вычисляющую произведение двух целых чисел. В программе гарантируется, что числа целые*/
#include <iostream>

using namespace std;

int main()
{
int a,b,c=0;
cin >> a >> b;
for(int i=0; i<b;i++)
{
c=c+a;
}
cout << c;
return 0;
}
