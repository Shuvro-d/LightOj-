#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
using namespace std;
ll digitnum(ll n,ll base)
{
    if (n < 0)
        return 0;
    if (n <= 1)
        return 1;
    double x = ((n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0))/log10(base);
    return floor(x) + 1;
}
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
     ll n,base;
     cin>>n>>base;
     printf("Case %lld: %lld\n",test,digitnum(n,base));
    }
    return 0;
}

