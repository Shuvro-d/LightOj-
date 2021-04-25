#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
using namespace std;
ll josephus(ll n, ll k)
{
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k-1) % n + 1;
}
int main()
{
    ll test;
    cin>>test;
    ll n,k;
    for(ll t=1;t<=test;t++)
    {
        cin>>n>>k;
        printf("Case %lld: %lld\n",t,josephus(n,k));
    }
    return 0;
}

