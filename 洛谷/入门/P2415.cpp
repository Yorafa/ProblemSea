#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n, count = 0;
    long long sum = 0;
    while (cin >> n){
        sum += n;
        count ++;
    }
    sum *= (long long) pow(2, count - 1);
    cout << sum << endl;
    return 0;
}


