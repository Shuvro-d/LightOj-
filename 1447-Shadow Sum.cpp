#include<bits/stdc++.h>
#define        ll        long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
      ll n;
      cin>>n;
      ll a[n];
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
      }
      ll sum=0;
      set<ll>v;
      ll sz=0;
      for(ll i=n-1;i>=0;i--)
      {
          ll x=a[i];
          ll y=abs(x);
          v.insert(y);
          if(v.size()>sz)
          {
              sum=sum+x;
              sz=v.size();
          }
      }
      printf("Case %lld: %lld\n",test,sum);
    }
    return 0;
}

