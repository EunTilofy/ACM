#include<bits/stdc++.h>
#define ll long long
//#define int long long
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
inline int Mul(int x, int y){return 1ll * x * y % mod;}
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=(x<<3)+(x<<1)+ch-'0';ch=getchar();}
    return x*f;
}
const int MN = 3e5 + 5;
int a[MN], b[MN], c[MN], n, m;
string s[105];
signed main() {
    // freopen("out.txt", "w", stdout);
    // freopen("in.txt", "r", stdin);
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--) {
        cin>>n;
        for(int i = 0; i < n; ++i) cin>>s[i];
        std::vector<vector<int> > ans(n+1);
        std::set<int> SS;
        std::vector<int> num(n+1);
        for(int i = 0; i < n; ++i) for(int j = 0; j < n; ++j) num[i]+=s[i][j]=='1';
        for(int SIZ = n; SIZ; --SIZ) {
            bool fl = 1;
            for(int i = 0; i < n; ++i) if(SS.count(i) == 0 && num[i] == SIZ-1) {
                for(int j = 0; j < n; ++j) if(SS.count(j) == 0) ans[j].pb(i);
                SS.insert(i);
                fl = 0;
            }
            if(fl) {
                for(int i = 0; i < n; ++i) for(int j = 0; j < n; ++j) if(i != j) 
                    if(SS.count(i)==0 && SS.count(j)==0) {
                    if(s[i][j] == '0') ans[i].pb(j);
                }
                break;
            }
        }
        for(int i = 0; i < n; ++i) std::sort(ans[i].begin(), ans[i].end());
        for(int i = 0; i < n; ++i) {
            cout<<ans[i].size()<<" ";
            for(auto x : ans[i]) 
                cout<<x+1<<" ";
            cout<<endl;
        }
    }
    return 0;
}