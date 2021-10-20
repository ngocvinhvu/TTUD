#include <bits/stdc++.h>
using namespace std;

int m, n ,f;
int x[100];


void print_sol(){
    for(int i = 1; i <= n; i++)
        cout << x[i] << ' ';
    cout << endl;
}

void TRY(int k){
    if (k == n) {
        x[k] = m - f;
        print_sol();
    } else {
        // de danh keo cho x[k + 1], ..., x[n]
        for(int c = 1; c <= m - f - (n - k); c++){
            x[k] = c;
            f += x[k];
            TRY(k + 1);
            f -= x[k];
        }
    }
}


int main(){
    cin >> n >> m;
    TRY(1);
    return 0;
}