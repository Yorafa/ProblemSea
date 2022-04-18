#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n < 2) return false;
    if (n == 2) return true;
    int m = (int) sqrt(n);
    while (m > 1) {
        if (n%m == 0) return false;
        m--;
    }
    return true;
}

int main() {
    int maxn = 0, minn = 101;
    int cr[26] = {0};
    string str;
    cin >> str;
    for (auto c : str) cr[c-'a']++;
    for (auto i : cr){
        if (maxn < i) maxn = i;
        if (minn > i && i != 0) minn = i;
    }
    if (isPrime(maxn - minn)){
        cout << "Lucky Word\n";
        cout << maxn-minn;
    }else{
        cout << "No Answer\n";
        cout << 0;
    }
    return 0;
}

