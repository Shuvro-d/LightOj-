#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
using namespace std;
ll calNum(ll year)
{
    return (year / 4) - (year / 100) + (year / 400);
}
 ll check(ll l, ll r)
{
    l--;
    ll num1 = calNum(r);
    ll num2 = calNum(l);
    return num1 - num2;
}
int main()
{
   ll tt;
   cin>>tt;
   string m1,m2;
   ll d1,d2,y1,y2;
   char a,b;
  for(ll test=1;test<=tt;test++)
   {
       cin>>m1>>d1>>a>>y1;
       cin>>m2>>d2>>b>>y2;
      if(m1!="January" and m1!="February")y1++;
      if(m2=="January"  or(m2=="February" and d2<29))y2--;
      printf("Case %lld: %lld\n",test,check(y1,y2));
   }
    return 0;
}

