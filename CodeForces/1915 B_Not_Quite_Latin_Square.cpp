#include <iostream>


int main(){
    using namespace std;
    int n;
    cin >> n;
    while (n--){
        int cnt[3] = {};
        for (int i = 0; i < 9; i++) {
            char c;
            cin >> c;
            if (c != '?') {cnt[c - 'A']++;}
        }	
        for (int i = 0; i < 3; i++) {
            if (cnt[i] < 3) {cout << (char)('A' + i) << '\n';}
        }
    }
    cout << endl;
    return 0;
}