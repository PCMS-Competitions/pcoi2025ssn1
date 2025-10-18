#include<bits/stdc++.h>
using namespace std;
int n,m,l[200005],r[200005],a[200005];
bitset<200005>sm;
int prf[200005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++) cin>>l[i]>>r[i];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]!=a[i-1]) sm[i]=1;
        prf[i]=prf[i-1]+sm[i];
    }
    for(int i=1;i<=m;i++){
        cout<<prf[r[i]]-prf[l[i]-1]+1-sm[l[i]]<<"\n";       
    }
}