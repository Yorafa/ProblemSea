#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[1025][1025] = {{0}};

void f(int r, int c, int rl, int cl){
    if (r + 1 >= rl || c + 1>= cl) return;
    for (int i = r; i < (rl-r)/2 + r; i++){
        for (int j = c; j < (cl - c)/2 + c; j++)
            arr[i][j] = 1;        
    }
    f(r + (rl-r)/2, c + (cl - c)/2, rl, cl);
    f(r, c + (cl - c)/2, (rl -r)/2 +r, cl);
    f(r+ (rl - r)/2, c, rl, (cl - c)/2 +c);
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

