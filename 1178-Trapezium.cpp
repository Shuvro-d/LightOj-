#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         E      2.718281828
#define         PI      2 * acos (0.0)
#define        MAX       500
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int t=1;t<=test;t++)
    {
       double a,b,c,d;
       cin>>a>>b>>c>>d;
       double s=(a+b+c+d)/2;
       double ans=abs(((a+c)/(a-c))*sqrt((s-a)*(s-c)*(s-c-d)*(s-c-b)));
       printf("Case %d: %.10lf\n",t,ans);
    }
    return 0;
}

