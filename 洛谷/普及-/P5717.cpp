#include <bits/stdc++.h>
using namespace std;

int main() {
    long a,b,c;
    cin >> a >> b >> c;
    if (a > b) swap(a,b);
    if (a > c) swap(a,c);
    if (b > c) swap(b,c);
    if (a + b <= c) {cout << "Not triangle\n"; return 0;}
    if (a*a + b*b == c*c) cout << "Right triangle\n";
    else if (a*a + b*b > c*c) cout << "Acute triangle\n";
    else cout << "Obtuse triangle\n";
    if (a==b || b==c || a==c) cout << "Isosceles triangle\n";
    if (a==b && b==c && a==c) cout << "Equilateral triangle\n";
    return 0;
}

