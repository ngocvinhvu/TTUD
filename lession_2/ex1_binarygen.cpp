// binary generate
#include <bits/stdc++.h>
using namespace std;

#define MAXN 30

int n;
int x[MAXN];


void print_sol(){
    // Ham nay in ra loi giai x[1], ..., x[n]
    for (int i = 1; i <= n; i++)
        cout << x[i];
    cout << endl;
}


void TRY(int i) {
    // Xay dung loi giai bo phan cap 1
    // X(i) co hai kha nang 0 hoac 1, ta can phai xet tung kha nang.
    for(int c = 0; c <= 1; c++){
        // gan lan luot kha nang (candidate) c cho x[i]
        x[i] = c;
        if(i == n) print_sol();
        else TRY(i + 1);
    }
}


int main(){
    cin >> n;
    TRY(1);
    return 0;
}