#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int m = (int) sqrt(n);
    while (m > 1) {
        if (n%m == 0) return false;
        m--;
    }
    return true;
}

int main() {
    int n, c = 0,s = 0, i = 2;
    cin >> n;
    if (n == 1 || n == 0){cout << 0; return 0;}
    while (s + i<= n){
        if (isPrime(i)){
            cout << i << "\n";
            s += i;
            c++;
        }
        i++;
    }
    cout << c;
    return 0;
}

