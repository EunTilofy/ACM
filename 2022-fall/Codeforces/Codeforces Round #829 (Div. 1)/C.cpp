#include<bits/stdc++.h>
#define ll long long
#define int long long
#define db double
#define ld long double
#define dbg1(x) cerr<<#x<<"="<<(x)<<" "
#define dbg2(x) cerr<<#x<<"="<<(x)<<"\n"
#define dbg3(x) cerr<<#x<<"\n"
using namespace std;
#define reg register
#define inf 0x3f3f3f3f
#define infL 0x3f3f3f3f3f3f3f3f
typedef pair<int,int> pii;
#define REP(i,a,b) for(int i=(a),i##_end_=(b);i<i##_end_;++i)
#define DREP(i,a,b) for(int i=(a),i##_end_=(b);i>i##_end_;--i)
#define For(i,a,b) for(int i=(a);i<=(b);++i)
#define FOr(i,a,b) for(int i=(a);i>=(b);--i)
#define y1 y11111111111
#define pb push_back
#define mkp make_pair
#define fi first
#define se second
#define mod 998244353
inline int qpow(int x,ll y,int m=mod){int r=1;for(;y;y>>=1,x=(ll)x*x%m)if(y&1)r=(ll)r*x%m;return r;}
inline int Add(int x, int y){return (x + y) % mod;}
inline int Mul(int x, int y){return ((1ll * x * y % mod) + mod) % mod;}
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=(x<<3)+(x<<1)+ch-'0';ch=getchar();}
    return x*f;
}
const int MN = 5e5 + 5;
int a[MN], b[MN], c[MN], n, m;
int inv[MN];
signed main() {
    int T = read();
    inv[0] = inv[1] = 1;
    REP(i, 2, MN) inv[i] = Mul(inv[mod % i], (mod - mod / i));
    while(T--) {
        n = read();
        b[0] = c[0] = 0;
        REP(i, 1, n + 1) {
            a[i] = read();
            b[i] = b[i - 1] + (a[i] == 1);
            c[i] = c[i - 1] + (a[i] == 0);
        }
        m = c[n];
        int u = b[m];
        int ans = 0;
        long long _ = (1ll * n * (n - 1ll)) / 2;
        _ %= mod;
        REP(i, 1, u + 1) {
            ans = Add(ans, Mul(Mul(inv[i], inv[i]), _));
        }
        printf("%lld\n", ans);
    }
    return 0;
}