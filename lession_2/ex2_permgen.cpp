#include <bits/stdc++.h>
using namespace std;
#define MAXN 20

int n;
int x[MAXN];

// in ra hoan vi hien tai luu trong mang x[]

void print_sol(){
    for (int i = 1; i <= n; i++)
        cout << x[i] << ' ';
    cout << endl;
}


// Ham kiem tra ung vien j co phu hop voi vi tri x[i] khong
bool UCV(int c, int i){
    // so sanh c voi cac gia tri x[1], x[2] ... , x[i - 1] xem co trung khong
    for (int k = 1; k <= i - 1; k++)
        if (c == x[k]) return false;
    return true;
}

void TRY(int i) {
    for (int c = 1; c <= n; c++){
        if (UCV(c, i)){
            x[i] = c;
            if (i == n) print_sol();
            else TRY(i + 1);
        }
    }
}

int main(){
    cin >> n;
    TRY(1);
    return 0;
}