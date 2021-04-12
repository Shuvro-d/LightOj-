#include<bits/stdc++.h>
#define        ll      long long int
using namespace std;
ll trailingzeroes(ll n)
{
    ll cnt=0;
    for(ll i=5; n/i>=1; i*=5)
    {
        cnt+=n/i;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll z;
    cin>>z;
    for(ll i=1; i<=z; i++)
    {
        ll s;
        cin>>s;
       ll m=-1;
       ll left=0,right=500000000;
    ll mid;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(trailingzeroes(mid)==s)
        {
            m=mid;
            right=mid-1;
        }
        if(trailingzeroes(mid)<s)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
        if(m!=-1)
            printf("Case %lld: %lld\n",i,m);
        else
            printf("Case %lld: impossible\n",i);
    }
    return 0;
}

