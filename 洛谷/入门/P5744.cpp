#include <bits/stdc++.h>
using namespace std;

typedef struct io{
    string name;
    int age;
    int grade;
}Io;

int main() {    
    int n;
    cin >> n;
    Io jg[10001];
    for (int i = 0; i < n; i++){
        cin >> jg[i].name >> jg[i].age >> jg[i].grade;
        jg[i].age++;
        if (jg[i].grade * 1.2 > 600) jg[i].grade = 600;
        else jg[i].grade = jg[i].grade*12/10;
        cout << jg[i].name << " " << jg[i].age << " " << jg[i].grade << endl;
    }
    return 0;
}


