#include <bits/stdc++.h>
using namespace std;

int main() {
    char isbn[14];
    cin >> isbn;
    int s=0, index = 0;
    for (int i = 0; i < 13; i++){
        if (isbn[i] == '-') continue;
        if(i != 12){index++; s += (isbn[i] - '0') * (index);}
        else{
            if (s%11 != isbn[i]-'0'){ 
                if (s%11 == 10 && isbn[i] == 'X') {cout << "Right"; return 0;}
                isbn[i] = (s%11 != 10)?'0' + s%11: 'X';}
            else {
                cout << "Right";
                return 0;
            }
        }
    }
    cout << isbn;
    
    return 0;
}

