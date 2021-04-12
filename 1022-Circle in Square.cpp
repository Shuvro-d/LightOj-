#include<bits/stdc++.h>
#define        ll       long long int
#define   mx        6
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
       double r;
       cin>>r;
       double pi=2 * acos (0.0);
       double square=pow(2*r,2);
       double circle=pi*pow(r,2);
       printf("Case %lld: %.2lf\n",test,square-circle);
    }
    return 0;
}

