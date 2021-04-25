#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
using namespace std;
int main()
{
    ll test;
    cin>>test;
    double l,w;
    for(ll t=1; t<=test; t++)
    {
        cin>>l>>w;
        if(l<w)swap(l,w);
        double a=12;
        double b=4*(w+l)*-1;
        double c=w*l;
        double x2=((-1*b)-sqrt(pow(b,2)-4*a*c))/(2*a);
        double ans2=x2*(w-2*x2)*(l-2*x2);
        printf("Case %lld: %.10lf\n",t,ans2);
    }
    return 0;
}

