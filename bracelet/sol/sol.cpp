#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#include <bitset>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
using i64 = long long;

int MOD = 1000000007;
int mu[1000005], b=1;
i64 p[1000005], a=0;
i64 x[1000005], ans=0;

i64 powm(i64 a, i64 b){
    a = (a+MOD)%MOD; i64 r=1;
    for(;b;b>>=1,a=a*a%MOD)if(b&1)r=r*a%MOD;
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    i64 n, m, k; cin >> n >> k; m = n;
    for (i64 i=2; n > 1 && i*i<=n; i++) {
        if (n % i == 0) {
            while (n % i == 0) n /= i;
            p[a++] = i;
        }
    }
    if (n>1) p[a++] = n;

    // for (int i=0; i<a; i++) cout << p[i] << " ";
    // cout << endl;
    // return 0;

    mu[0] = 1; x[0] = m, ans = powm(k,m); 
    for (int j=0; j<a; j++) {
        int t = b;
        for (int l=0; l<t; l++) {
            x[b] = x[l]/p[j]; mu[b] = -mu[l]; 
            ans = (ans + mu[b]*powm(k,x[b])) % MOD; b++;
            // cout << b << endl;
        }
    }
    cout << (ans+MOD)%MOD << endl;
    return 0;
}