#include<bits/stdc++.h>
#define        ll       long long int
#define      PI        3.1416
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
        ll a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        ll ans=sqrt(pow(a[0],2)+pow(a[1],2));
        if(ans==a[2])printf("Case %lld: yes\n",test);
        else printf("Case %lld: no\n",test);
    }
    return 0;
}

