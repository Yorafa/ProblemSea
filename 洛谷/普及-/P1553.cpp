#include <bits/stdc++.h>
#define pb push_back

using namespace std;

typedef long long ll;

void re(char * arr){
    int l = 0, r = strlen(arr) - 1;
    while (l < r) swap(arr[l++], arr[r--]);
}

void rmz(char * w){
    int r = strlen(w) - 1;
    while (w[r] == '0') w[r--] = '\0';
}

int main(){
    char a[21] = "\0";
    cin >> a;
    if (strchr(a, '.') != NULL){
        char * ptr = strchr(a, '.');
        *ptr = '\0';
        ptr += 1;
        re(a);
        re(ptr);
        rmz(ptr);
        cout << strtol(a, NULL, 10) << "." << strtol(ptr, NULL, 10) << endl;
    }else if (strchr(a, '/') != NULL){
        char * ptr = strchr(a, '/');
        *ptr = '\0';
        ptr += 1;
        re(a);
        re(ptr);
        cout << strtol(a, NULL, 10) << "/" << strtol(ptr, NULL, 10) << endl;
    }
    else if (strchr(a, '%') != NULL){
        char * ptr = strchr(a, '%');
        *(ptr) = '\0';
        re(a);
        cout << strtol(a, NULL, 10) << "%" << endl;
    }else{
        re(a);
        cout << strtol(a, NULL, 10) << endl;
    }
    return 0;
}
