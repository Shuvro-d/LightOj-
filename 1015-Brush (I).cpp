#include<bits/stdc++.h>
#define        ll       long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
        ll n;
        cin>>n;
        ll ans=0;
        while(n--){
            ll x;
            cin>>x;
            if(x>0)ans=ans+x;
        }
        printf("Case %lld: %lld\n",test,ans);
    }
    return 0;
}


