
#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;
int main()
{
    ll test;
    cin>>test;
    for(ll t=1;t<=test;t++)
    {
    ll n,k;
    cin>>n>>k;
    ll cnt=1;ll num=k;
    while(1)
    {
        if(num%n==0)break;
        num=(num*10+k)%n;
        cnt++;
    }
    printf("Case %lld: %lld\n",t,cnt);
    }
    return 0;
}
