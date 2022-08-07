#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;

int gcd(int a, int b){
    return (b == 0)?a:gcd(b, a % b);
}

void search(vector<string>& board){
    for (int i = 1; i < board.size()-1; i++){
        for (int j = 1;  j < board[i].size()-1; j++){
            if (board[i][j] == '#'){
                if (board[i-1][j-1] == '#' && board[i-1][j+1] == '#'){
                    cout << i+1 << " " << j+1 <<endl;
                    return;
                }
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    string line;
    for (int i = 0; i < n; i++){
        vector<string> board;
        for (int j = 0; j < 8; j++){
            cin >> line;
            board.pb(line);
        }
        search(board);
    }

    return 0;
}
