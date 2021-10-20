#include <bits/stdc++.h>
#include <math.h>
using namespace std;




bool UCV(int c, int k){
    // so sanh c vowi cac quan hau truoc do dat o x[1], x[2], ...
    for (int i = 1; i < k; i++) {
        // kiem tra con hau hang k cot c va hang i cot x[i] co an nhau hay khong
        if ((c == x[i])) || (k - i == fabs(x[i] - c))
            return false
    }
    return true
}

void TRY(int k){
    for(int c = 1; c <= n; c++){
        if (UCV(c, k)) {
            c[k] = c;
            if (k == n) print_sol(l);
            else TRY(k+1);
        }
    }
}

int main(){
    
}