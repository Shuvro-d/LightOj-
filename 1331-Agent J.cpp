#include<bits/stdc++.h>
#define        ll       long long int
#define        db       double
#define   mx        6
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
        db r1,r2,r3;
        cin>>r1>>r2>>r3;
        db a=r1+r2;
        db b=r1+r3;
        db c=r2+r3;
        db s=(a+b+c)/2;
        db area1=sqrt(s*(s-a)*(s-b)*(s-c));
        db A=acos((b*b+c*c-a*a)/(2*b*c));
        db B=acos((a*a+c*c-b*b)/(2*a*c));
        db C=acos((a*a+b*b-c*c)/(2*a*b));
        db area_A= A*r3*r3*0.5;
        db area_B= B*r2*r2*0.5;
        db area_C= C*r1*r1*0.5;
        db area2=(area_A+area_B+area_C);
        db ans=area1-area2;
        printf("Case %lld: %.10lf\n",test,ans);
    }
    return 0;
}

