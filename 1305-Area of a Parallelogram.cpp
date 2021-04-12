#include<bits/stdc++.h>
#define        ll       long long int
#define   mx        6
using namespace std;
ll findarea(ll a1,ll a2,ll b1,ll b2,ll c1,ll c2)
{
    ll sum1=(a1*b2)+(b1*c2)+(c1*a2);
    ll sum2=(a1*c2)+(c1*b2)+(b1*a2);
    return sum1-sum2;
}
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
        ll a1,a2,b1,b2,c1,c2,d1,d2;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        ll area=findarea(a1,a2,b1,b2,c1,c2);
        d1=a1+c1-b1;
        d2=a2+c2-b2;
        printf("Case %lld: %lld %lld %lld\n",test,d1,d2,(int)abs((double)area));
    }
    return 0;
}

