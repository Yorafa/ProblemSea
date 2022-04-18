#include <bits/stdc++.h>
using namespace std;

char rr[11][11] = {"\0"};
char o[11][11] = {"\0"};
char ans[11][11] = {"\0"};
char vrr[11][11] = {"\0"};

void r90(int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            rr[j][n-1-i] = o[i][j];
}

void r180(int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            rr[n-1-i][n-1-j] = o[i][j];
}

void r270(int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            rr[n-1-j][i] = o[i][j];
}

void vr90(int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            vrr[j][n-1-i] = rr[i][j];
}

void vr180(int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            vrr[n-1-i][n-1-j] = rr[i][j];
}

void vr270(int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            vrr[n-1-j][i] = rr[i][j];
}

void vr(int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            rr[i][n-1-j] = o[i][j];
}

void prr(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << rr[i][j] << " ";
        cout << "\n";
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << vrr[i][j] << " ";
        cout << "\n";
    }
}

bool oeq(int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (o[i][j] != ans[i][j]) return false;
    return true;
}

bool eq(int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (rr[i][j] != ans[i][j]) return false;
    return true;
}

bool veq(int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (vrr[i][j] != ans[i][j]) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> o[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> ans[i][j];
    r90(n);
    if (eq(n)){cout << 1;return 0;}
    r180(n);
    if (eq(n)){cout << 2;return 0;}
    r270(n);
    if (eq(n)){cout << 3;return 0;}
    vr(n);
    if (eq(n)){cout << 4;return 0;}
    vr90(n);
    if (veq(n)){cout << 5;return 0;}
    vr180(n);
    if (veq(n)){cout << 5;return 0;}
    vr270(n);
    if (veq(n)){cout << 5;return 0;}
    if (oeq(n)){
        cout << 6;
        return 0;}
    cout << 7;
    cout << endl;
    return 0;
}

