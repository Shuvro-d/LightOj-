#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
using namespace std;
int main()
{
    ll tt;
    cin>>tt;
    for(ll test=1; test<=tt; test++)
    {
        ll w;
        cin>>w;
        if(w%2==1)printf("Case %lld: Impossible\n",test);
        else
        {
            ll n,m;
            n=w/2;
            m=2;
             while(n%2==0)
             {
                 n=n/2;
                 m=m*2;
             }
            printf("Case %lld: %lld %lld\n",test,n,m);
        }
    }
    return 0;
}
