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
    for(ll test=1; test<=t; test++)
    {
      double v1,v2,v3,a1,a2;
      cin>>v1>>v2>>v3>>a1>>a2;
      double s1=pow(v1,2)/(2*a1);
      double s2=pow(v2,2)/(2*a2);
      double d=s1+s2;
      double t1=v1/a1;
      double t2=v2/a2;
      double ans=v3*max(t1,t2);
      printf("Case %lld: %.10lf %.10lf\n",test,d,ans);
    }
    return 0;
}

