#include <bits/stdc++.h>
using namespace std;

int r[128], w[128];
int main() {
    memset(r, 0, sizeof(int)*128);
    memset(w, 0, sizeof(int)*128);
    int n, c_in, k_in, index;
    cin >> n;
    w[0] = 1;
    for (int i = 1; i < n + 1; i ++){
        c_in = 0;
        for (int j = 0; j < 128; j++){
            w[j] = w[j]*i + c_in;
            c_in = w[j]/10;
            w[j] = w[j]%10;
        }
        k_in = 0;
        for (int k = 0; k < 128; k++){
            r[k] += w[k] + k_in;
            k_in = r[k]/10;
            r[k] = r[k]%10;
        }
    }
    index = 127;
    while (r[index] == 0) index--;
    for(int i = index; i >= 0; i--) cout << r[i];
    cout << endl;
    return 0;
}

