#include <bits/stdc++.h>
using namespace std;

bool lastc(int** arr, int target, int n){
    for (int i = 0; i < n; i++)
        if (arr[i][n-1] == target) return true;
    return false;
}

bool fr(int** arr, int target, int n){
    for (int i = 0; i < n; i ++)
        if (arr[0][i] == target) return true;
    return false;
}

int main() {
    int n, first;
    cin >> n;
    bool a,b;
    int ** arr;
    arr = new int * [n];
    for (int i = 0; i < n; i++) arr[i] = new int[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) arr[i][j] = 0;
    arr[0][n/2] = 1;
    int r = 0, c = n/2;
    for (int i = 2; i <= n * n; i ++){
        a = lastc(arr, i-1, n);
        b = fr(arr, i-1, n);
        if (a && b) {
            arr[1][n-1] = i;
            r = 1;
            c = n - 1;
        }
        else if (a) {
            arr[r-1][0] = i;
            r = r - 1;
            c = 0;
        }
        else if (b){
            arr[n-1][c+1] = i;
            r = n - 1;
            c = c + 1;
        }else{
            if (arr[r-1][c+1] == 0){
                arr[r-1][c+1] = i;
                r --;
                c ++;
            }else{
                arr[r+1][c] = i;
                r ++;
            }
        }
    }
    for (int i = 0; i < n; i++){
        first = 1;
        for (int j = 0; j < n; j++){
            if (first-- == 1) cout << arr[i][j];
            else cout << " " << arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}

