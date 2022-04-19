#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    int count = 1;
    char pre = '\0';
    cin >> a;
    for (auto c : a){
        if (!pre) pre = c;
        else{
           if (pre == c) count ++;
           else {count = 1;pre = c;}
        }
        if (count >=7 ){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
