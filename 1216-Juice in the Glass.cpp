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
    double r1,r2,h,p;
    cin>>r1>>r2>>h>>p;
    double height1=r1-r2;
    double height2=p*(height1/h);
    double r3=height2+r2;
    double ans=(PI/3)*p*(pow(r2,2)+pow(r3,2)+r2*r3);
    printf("Case %d: %.10lf\n",t,ans);
    }
    return 0;
}

