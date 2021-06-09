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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    int sz=1001;
    for(int tt=1;tt<=t;tt++)
    {
       int n;
       cin>>n;
       int s=n;
       int a[n][6];
       int x1=0,x2=1100,y1=0,y2=1100,z1=0,z2=1100;
       for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3]>>a[i][4]>>a[i][5];
        x1=max(x1,a[i][0]);x2=min(x2,a[i][3]);
        y1=max(y1,a[i][1]);y2=min(y2,a[i][4]);
        z1=max(z1,a[i][2]);z2=min(z2,a[i][5]);
       }
       int ax=x2-x1;
       int ay=y2-y1;
       int az=z2-z1;
       if(ax>0 and ay>0 and az>0)printf("Case %d: %d\n",tt,ax*ay*az);
       else printf("Case %d: 0\n",tt);
    }
    return 0;
}
