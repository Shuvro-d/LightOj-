#include<bits/stdc++.h>
#define        ll        long long int
#define        ls        unsigned long long
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
#define        frin          for(ll i=0;i<n;i++)
#define        frjn          for(ll j=0;j<n;j++)

const int   mod=1e9+7;
using namespace std;
#define m 5000000
int phi[m+2];
ls pp[m+2];
void phioneton()
{
    for(int i=2;i<=m;i++)
        phi[i]=i;
    for(int i=2;i<=m;i++)
        if(phi[i]==i)
        for(int j=i;j<=m;j+=i)
        phi[j]-=phi[j]/i;
    return;
}
void precompute()
{
    pp[1]=0;
    for(int i=2;i<=m;i++){
        pp[i]=((ls)phi[i]*(ls)phi[i])+pp[i-1];
    }
}
int main()
{
   int t;
   cin>>t;
   phioneton();
   precompute();
   for(int p=1;p<=t;p++)
   {
       int a,b;
       cin>>a>>b;
       ls res=pp[b]-pp[a-1];
       printf("Case %d: %llu\n",p,res);
   }
    return 0;
}

