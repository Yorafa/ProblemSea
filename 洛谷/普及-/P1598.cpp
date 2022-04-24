#include <bits/stdc++.h>
using namespace std;

int arr[26] = {0};
int main() {
    int m = 0;
    string line;
    for (int i = 0; i < 4; i++){
        getline(cin, line);
        for (auto c : line){
            if (c >= 'A' &&  c<= 'Z'){
                arr[c-'A'] ++;
                m = max(arr[c-'A'], m);
            }
        }
    }
    for (int i = m; i > 0; i--){
        for (int j = 0; j < 26; j++){
            if (arr[j] == i && j != 25){
                cout << "* ";
                arr[j]--;
            }else if (j!=25 && arr[j] != i)cout << "  ";
            else if (j == 25 && arr[j] == i) cout << "*" << endl;
            else cout << " " << endl;
        }
    }
    cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" <<endl;
    return 0;
}

