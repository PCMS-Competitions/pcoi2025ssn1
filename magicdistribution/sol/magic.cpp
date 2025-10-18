#include<bits/stdc++.h> 
using namespace std;
long long inv[10000005],p,fact[10000005];
long long pow_mod(long long a, long long b, long long p) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % p;
        a = a * a % p;
        b >>= 1;
    }
    return res;
}
pair<string, long long> dividehigh(const string& num, long long prime){
    string result;
    long long current=0;
    for(int i=0;i<num.length();i++){
        current = current*10+(num[i]-'0');
        if(current<prime&&result.length()>0){
            result += "0";
        }
        else if (current>=prime){
            result += (current/prime)+'0';
            current = current%prime;
        }
    }
    if (result.size()==0) return {"0",current};
    return {result,current};
}
void prep_invfact(){
	inv[p-1] = p-1;
	for(long long i=p-2;i>=1;i--){
		inv[i] = (inv[i+1]*(i+1))%p;
	}
	inv[0] = 1;
	fact[0]=1;
	fact[1]=1;
	for(int i=2;i<p;i++){
		fact[i] = (fact[i-1]*i)%p;
	}
}
int main(){
	long long Q;
	string n,m;
	cin >> Q>>p;
	prep_invfact();
	while(Q--){
		cin >> n >> m;
		long long cnt=1;
		bool f=1;
		while(n!="0"&&m!="0"){
			pair<string, long long> rn = dividehigh(n, p);
			long long u = rn.second;
			n = rn.first;
			
			pair<string, long long> rm = dividehigh(m, p);  
			long long v = rm.second;
			m = rm.first;
             
            
			if (u<v){
				cout << 0 << endl;
				f=0;
				break;
			}
			cnt = ((((cnt*fact[u])%p)*inv[v])%p*inv[u-v])%p;

		}
        if(f) cout << cnt%p << endl;
	}
	
	
}
