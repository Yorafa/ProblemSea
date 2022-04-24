#include <bits/stdc++.h>
using namespace std;

long long f(long long x){
    return (x==0)?1:x*f(x-1);
}

int main() {    
    long long n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}


