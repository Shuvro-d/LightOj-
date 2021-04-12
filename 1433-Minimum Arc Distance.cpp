#include<bits/stdc++.h>
#define        ll        long long int
using namespace std;
double distance(ll x1, ll y1, ll x2, ll y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}
double angle(double oa,double ob,double ab)
{
    double x=pow(ob,2)+pow(oa,2)-pow(ab,2);
    double y=2*ob*oa;
    return acos(x/y);
}
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
     ll ox,oy,ax,ay,bx,by;
     cin>>ox>>oy>>ax>>ay>>bx>>by;
     double oa=distance(ox,oy,ax,ay);
     double ob=distance(ox,oy,bx,by);
     double ab=distance(ax,ay,bx,by);
     double theta=angle(oa,ob,ab);
     printf("Case %lld: %.10lf\n",test,oa*theta);
    }
    return 0;
}

