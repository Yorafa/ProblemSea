#include <bits/stdc++.h>

using namespace std;

int main() {
    char word[12] = "\0", sentence[1000005] = "\0";
    cin >> word;
    char tmp;
    int i = 0 ;
    tmp = getchar();
    while((tmp = getchar()) != EOF && i < 1000005){
        if (tmp >= 'A' && tmp <= 'Z') tmp = tolower(tmp);
        sentence[i++] = tmp;
    }
    for (int i = 0; i < (int) strlen(word); i++) word[i] = tolower(word[i]);
    
    int first = -1, count = 0;
    
    char * ptr, *q = sentence;
    ptr = strstr(q, word); 

    while (ptr != NULL){
        if (ptr - sentence == 0){
            if (*(ptr + strlen(word)) == ' '){
                count++;
                if (first == -1) first = ptr - sentence;
            }
            q = ptr + strlen(word);
        }else if (ptr + strlen(word) == sentence + strlen(sentence)){
            if (*(ptr - 1) == ' '){
                count++;
                if (first == -1) first = ptr - sentence;
            }
            q = ptr + strlen(word);
        }else {
            if (*(ptr - 1) == ' ' && *(ptr + strlen(word)) == ' '){
                count++;
                if (first == -1) first = ptr - sentence;
            } 
            q = ptr + strlen(word);
        }
        ptr = strstr(q, word); 
    }
    if (first == -1){
        cout << -1 << endl;
        return 0;
    }
    cout << count << " " << first;
    return 0;
}

