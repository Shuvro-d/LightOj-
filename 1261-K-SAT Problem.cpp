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
    for(int tt=1;tt<=t;tt++)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a[n][k];
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                cin>>a[i][j];
            }
        }
       int p;
       cin>>p;
       int b[p];
       int mp[m+1];
       for(int i=0;i<=m;i++)mp[i]=0;
       for(int i=0;i<p;i++){
            cin>>b[i];
            mp[b[i]]=1;
       }
       bool flag=true;
       for(int i=0;i<n;i++){
            bool sag=false;
        for(int j=0;j<k;j++){
            int x=abs(a[i][j]);
            if(a[i][j]>0){
                if(mp[x]==1){
                    sag=true;
                    break;
                }
            }
            else if(a[i][j]<0){
                if(mp[x]==0){
                    sag=true;
                    break;
                }
            }
        }
        if(sag==false){
            flag=false;
            break;
        }
       }
       if(flag)printf("Case %d: Yes\n",tt);
       else printf("Case %d: No\n",tt);
    }
    return 0;
}

