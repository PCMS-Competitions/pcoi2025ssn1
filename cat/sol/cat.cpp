#include <bits/stdc++.h>
using namespace std;

bool is_rainbow_cat_food(int x) {
    if (x % 7 == 0) return true;
    while (x > 0) {
        if (x % 10 == 7) return true;
        x = x / 10;
    }
    return false;
}

void solve()
{
    int n, x; cin >> n >> x;
    int ans = 0, c = 0;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        if (is_rainbow_cat_food(k)) {
            ans = ans + 1;
            c = 0;
        } else {
            c = c + 1;
        }
        if (c == x) break;
    }
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}