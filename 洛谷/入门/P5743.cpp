#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n;
    cin >> n;
    long long tao = 1;
    for (int i = n - 1; i > 0; i--){
        tao = (tao+1)*2;
    }
    cout << tao <<endl;
    return 0;
}


