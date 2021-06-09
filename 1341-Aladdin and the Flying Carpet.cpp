#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
#define        frin          for(ll i=0;i<n;i++)
#define        frjn          for(ll j=0;j<n;j++)
const int   mod=1e9+7;
using namespace std;
#define m 1000010

long long int primes[m], cnt, siv[m];

void sieve()
{
    ll i, j;
    for (i=3; i<m; i+=2)
        if(!siv[i])
            for (j=i*i; j<m; j+=i+i)
                siv[j]=1;
    primes[cnt++]=2;
    for (i=3; i<m; i+=2)
        if(!siv[i]) primes[cnt++]=i;
    return;
}
int numberOfDivisors(ll n)
{
    ll  cnt = 1;
    for(int i = 0; i < m && primes[i]*primes[i] <= n; ++i) {
        if(n % primes[i] == 0) {
            int pw = 0;
            while(n % primes[i] == 0) ++pw, n /= primes[i];
            cnt *= pw + 1;
        }
    }
    if(n != 1) cnt <<= 1;
    return cnt;
}
int main()
{
    ll t;
    cin>>t;
    sieve();
    for(ll p=1; p<=t; p++)
    {
        ll n,d;
        cin>>n>>d;
        ll rt = sqrt(n), ans;
        if(d > rt or d*d == n) {
            ans = 0;
        }
        else {
            ans = numberOfDivisors(n) / 2;
            for(int i = 1; i < d; ++i)
                if(n % i == 0) --ans;
        }
        printf("Case %lld: %lld\n",p,ans);
    }
    return 0;
}


