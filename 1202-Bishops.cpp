#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll test=1;test<=t;test++)
    {
        ll r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;

        ll sum1=max(r1,r2)-min(r1,r2);
        ll sum2=max(c1,c2)-min(c1,c2);

        if(r1==r2 and c1==c2)printf("Case %lld: 0\n",test);
        else if(sum1==sum2)printf("Case %lld: 1\n",test);
        else if(r1==r2)
        {
            ll sub=abs(c2-c1);
            if(sub%2==0)printf("Case %lld: 2\n",test);
                else printf("Case %lld: impossible\n",test);
        }
        else if(c1==c2)
        {
            ll sub=abs(r2-r1);
            if(sub%2==0)printf("Case %lld: 2\n",test);
                else printf("Case %lld: impossible\n",test);
        }
        else
        {
                    ll rsub=abs(r2-r1);
                    ll csub=abs(c2-c1);
                    if(rsub%2==0)
                    {
                        if(csub%2==0)printf("Case %lld: 2\n",test);
                        else printf("Case %lld: impossible\n",test);
                    }
                    else
                    {
                        if(csub%2==0) printf("Case %lld: impossible\n",test);
                        else printf("Case %lld: 2\n",test);
                    }
        }
    }
    return 0;
}
