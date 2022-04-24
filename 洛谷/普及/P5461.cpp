#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[1025][1025] = {{0}};

void f(int r, int c, int rl, int cl){
    if (r >= rl || c >= cl) return;
    for (int i = r; i < rl/2; i++){
        for (int j = c; j < cl/2; j++)
            arr[i][j] = 1;        
    }
    f(r + rl/2, c + cl/2, rl, cl);
    f(r, c + cl/2, rl/2, cl);
    f(r+rl/2, c, rl, cl/2);
}

int main(){
    int n;
    cin >> n;
    int m = pow(2, n);
    f(0, 0, m, m);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            if (j == 0) cout << !arr[i][j];
            else cout << " " << !arr[i][j];
        }
        cout << endl;
    }
    return 0;
}

