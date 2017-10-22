#include <iostream>

using namespace std;

int main()
{
int a,S,N;
N=0; S=0;
do {
cin >> a;
S=S+a;
N++;
} while (a!=0);
double d;
d = (double)S/(double)N;
cout << d;
return 0;
}
