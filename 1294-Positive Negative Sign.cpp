#include<bits/stdc++.h>
#define        ll       long long int
#define   mx        6
using namespace std;
ll cnt(ll s,ll d,ll n)
{
    ll sum;
    s=2*s;
    ll k=(n-1)*d;
    sum=(s+k)*n;
    sum=sum/2;
    return sum;
}
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
       ll n,m;
       cin>>n>>m;
          ll ans=0;
        ll num=n/(2*m);
        ll start1=(m*(m+1))/2;
        ll x=2*m;
        ll start2=(x*(x+1) /2)-start1;
        ll d=(start2-start1)*2;
        ll sum1=cnt(start1,d,num);
        ll sum2=cnt(start2,d,num);
        ans=sum2-sum1;
         printf("Case %lld: %lld\n",test,ans);
    }
    return 0;
}

