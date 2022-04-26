#include <bits/stdc++.h>

using namespace std;

unordered_map<int, char> mp;
unordered_map<char, int> pm;

void ts(int n){
    if (n > 26){
        if (n%26==0){
            ts(n/26 - 1);
            cout << mp[26];
        }else{
            ts(n/26);
            cout << mp[n%26];
        }
    }else if (n == 26) cout << mp[n];
    else cout << mp[n%26];
}

int ti(char *arr){
    int num = 0, loc = 0, p;
    for (int i = strlen(arr) - 1; i >=0; i--){
        p = (int) round(pow(26.0, loc++));
        num += pm[arr[i]] * p;
    }
    return num;
}

void g(char *arr, char*col, int*c){
    int ci = 0;
    for (int i = 0; i < strlen(arr); i++){
        if (isalpha(arr[i])) col[ci++] = arr[i];
        else break;
    }
    char* ptr = arr + ci - 1;
    ptr += 1;
    *c = stoi(ptr, NULL, 10);
}

int main(){
    int n,a,b,c;
    cin >> n;
    for (int i = 0; i < 26; i++) mp[i+1] = 'A' + i;
    for (int i = 0; i < 26; i++) pm['A' + i] = i + 1;
    char str[100] = "\0";
    char col[100] = "\0";
    for (int i = 0; i < n; i++){
        cin >> str;
        if (sscanf(str, "R%dC%d", &a, &b) == 2){
            ts(b);
            cout << a << endl;
        }else{
            g(str, col, &c);
            cout << "R" << c << "C" << ti(col) << endl;
            memset(col, '\0', 100);
        }
        memset(str, '\0', 100);
    }
}
