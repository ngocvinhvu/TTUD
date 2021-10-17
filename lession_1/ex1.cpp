#include <bits/stdc++.h>

using namespace std;


int main() {
    freopen("data.inp", "r", stdin);
    int T;
    int prof[4];
    std::cin >> T;
    while (T--){
        for (int i = 0; i < 4; i++)
            cin >> prof[i];
        sort(prof, prof + 4);
        int ans = 0;
        if (prof[0] < 0) ans += prof[0];
        if (prof[1] < 0) ans += prof[1];
        cout << ans << endl;
    }
    return 0;
}