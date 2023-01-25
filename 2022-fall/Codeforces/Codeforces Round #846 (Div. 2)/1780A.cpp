#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define all(x) x.begin(),x.end()
#define fi first
#define se second
#define pb push_back
#define mkp make_pair
#define mod 998244353
inline int qpow(int x,ll y,int m=mod){int r=1;for(;y;y>>=1,x=(ll)x*x%m)if(y&1)r=(ll)r*x%m;return r;}
inline int Add(int x, int y){return (x + y) % mod;}
inline int Mul(int x, int y){return 1ll * x * y % mod;}
const int MN = 3e5 + 5;
int a[MN], b[MN], c[MN];

void solve(){
	int n, m;
    cin >> n;
    int a1 = -1, a2[2] = {-1, -1}, a3[2] = {-1, -1};
    int num0 = 0, num1 = 0;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        if(a[i]&1) {
            if(a1 == -1) a1 = i;
            else if(num0 < 2) a2[num0++] = i;
        }
        else {
            if(num1 < 2) a3[num1++] = i;
        }
    }
    if(a2[1] != -1 && a1 != -1) {
        cout << "YES" << endl;
        cout << a1 << " " << a2[0] << " " << a2[1] << endl;
    } else if(a3[1] != -1 && a1 != -1) {
        cout << "YES" << endl;
        cout << a1 << " " << a3[0] << " " << a3[1] <<endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int T;
	cin>>T;
	while(T--) 
		solve();
}