#include <iostream>
using namespace std;
int main()
{ int a, p = 0, c = 0;
cin >> a;
if (a == 1){
cout  << a << " :Unit";
} else {
for (int i = 2; i <= a/2; i++){
if (a%i == 0) {
c = a;
} else {
p = a;
}
}
if (c == a){
cout << a << ": Composite ";
} else {
cout << a << ": Prime ";
}
}
return 0;
}
