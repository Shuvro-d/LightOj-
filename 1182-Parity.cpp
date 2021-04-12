#include<bits/stdc++.h>
#define        ll       long long int
#define   mx        6
using namespace std;
ll decToBinary(ll n)
{
    ll ans=0;
    while (n > 0) {
        ll x= n % 2;
        n = n / 2;
        if(x==1)ans++;
    }
    return ans;
}
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
        ll n;
        cin>>n;
        if(decToBinary(n)%2==0)printf("Case %lld: even\n",test);
        else printf("Case %lld: odd\n",test);
    }
    return 0;
}

