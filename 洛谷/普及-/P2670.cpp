#include <bits/stdc++.h>
using namespace std;

char lei[101][101];
int a, b;

int search(int r, int c){
    int l = 0;
    if (r - 1 >= 0){
        if (lei[r-1][c] == '*') l++;
    }
    if (r + 1 < a){
        if (lei[r+1][c] == '*') l++;
    }
    if (c - 1 >= 0){
        if (lei[r][c-1] == '*') l++;
    }
    if (c + 1 < b){
        if (lei[r][c+1] == '*') l++;
    }
    if (r - 1 >= 0 && c - 1 >= 0){
        if (lei[r-1][c-1] == '*') l++;
    }
    if (r + 1 < a && c - 1 >= 0){
        if (lei[r+1][c-1] == '*') l++;
    }
    if (r - 1 >= 0 && c + 1 < b){
        if (lei[r-1][c+1] == '*') l++;
    }
    if (r + 1 < a && c + 1 < b){
        if (lei[r+1][c+1] == '*') l++;
    }
    return l;
}

int main() {
    string line;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> line;
        for (int j = 0; j < b; j++) lei[i][j] = line[j];
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            if (lei[i][j] != '*') lei[i][j] = search(i, j) + '0';
        }
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cout << lei[i][j];
        }
        cout << endl;
    }
    return 0;
}

