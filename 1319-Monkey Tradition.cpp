#include<bits/stdc++.h>
#define        ll        long long int
#define        ls        unsigned long long
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
#define        frin          for(ll i=0;i<n;i++)
#define        frjn          for(ll j=0;j<n;j++)
const int   mod=1e9+7;
using namespace std;
ll egcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
ll modInverse(ll a, ll m)
{
    ll x, y, d;
    d=egcd(a, m, x, y);
    if(d == 1) return (x % m);
    return 0;
}
ll findMinX(vector<ll>&num,vector<ll>&rem)
{
    ll k=num.size();
   ll prod = 1;
    for (ll i = 0; i < k; i++)
        prod *= num[i];
    ll result = 0;
    for (ll i = 0; i < k; i++) {
        ll pp = prod / num[i];
        ll inv=modInverse(pp,num[i]);
        if(inv<0)inv+=num[i];
        result += rem[i] * inv * pp;
        result%=prod;
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
   ll t;
   cin>>t;
   for(ll tt=1;tt<=t;tt++)
   {
     ll n;
     cin>>n;
     vector<ll>num(n),rem(n);
     for(ll i=0;i<n;i++){
        cin>>num[i]>>rem[i];
     }
     printf("Case %lld: %lld\n",tt,findMinX(num,rem));
   }
    return 0;
}
