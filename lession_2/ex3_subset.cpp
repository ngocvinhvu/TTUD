#include <bits/stdc++.h>
using namespace std;

int m, n;
int x[20];

void print_sol(){
    for(int i = 1; i <= m; i++)
        cout << x[i] << ' ';
    cout << endl;
}

void TRY(int i){
    for(int c = x[i - 1] + 1; c <= n - m + i; c++){
        x[i] = c;
        if (i == m) print_sol();
        else TRY(i + 1);
    }
}

int main(){
    cin >> n >> m;
    TRY(1);
    return 0;
}