       
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
#define int long long int
#define ff first
#define sz(arr) arr.size()
#define ss second
#define pb push_back
#define all(x) x.begin(),x.end()
#define fo(i,a,b) for(i=a;i<=b;i++)
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
const int N=3e5+10;
const int mod=1e9+7;
vll fact(N + 1, 1);
vll ifact(N + 1, 1);
inline int high(int a,int b){return (a>>b)&1;}
 ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
ll C(ll n, ll r){
//paste this in main before t--
int j=0;int i=0;
fo(i, 2, N){fact[i] = mod_mul(fact[i - 1], i);}ifact[N] = inv(fact[N]);
for (i = N - 1; i > 0; i--){ifact[i] = mod_mul(i + 1, ifact[i + 1]);}

ll ans = 1;ans = fact[n]; ans = mod_mul(ans, pwr(fact[r], mod - 2));ans = mod_mul(ans, pwr(fact[n - r], mod - 2));return ans;}
void _print(ll t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void __print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*struct node
{
int sum;
};
node single(int val)
{
node temp;
temp.sum=val;
return temp;
}
node tree[400400];
ll arr[100100];
int n,m;
node merge(node a,node b)
{
node temp;
temp.sum=a.sum+b.sum;return temp;
}
void build(int index,int l,int r)
{
if(l==r)
{
tree[index]=single(arr[l]);
return ;}
int mid=(l+r)>>1;
build(2*index+1,l,mid);build(2*index+2,mid+1,r);
tree[index]=merge(tree[2*index+1],tree[2*index+2]);}
void update(int index,int l,int r,int pos,int val)
{
if(pos<l||pos>r)return ;
if(l==r){
tree[index]=single(val);
arr[l]=val;return ;}
int mid=(l+r)>>1;
 update(2*index+1,l,mid,pos,val);update(2*index+2,mid+1,r,pos,val);tree[index]=merge(tree[2*index+1],tree[2*index+2]);}
node query(int index,int l,int r,int lx,int rx)
{
if(l>rx||r<lx)
return  single(0);
if(l>=lx&&r<=rx)
return tree[index];
int mid=(l+r)>>1;
return merge(query(2*index+1,l,mid,lx,rx),query(2*index+2,mid+1,r,lx,rx));
}
node query(int l,int r)
{
return query(0,0,n-1,l,r);
}
void update(int index,int val)
{
update(0,0,n-1,index,val);
}*/
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
void solve()
{
 
 

}
signed main()
{
int t=1;
#ifndef ONLINE_JUDGE
freopen("error.txt","w",stderr);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
while(t--){
solve();
}
    return 0;
}