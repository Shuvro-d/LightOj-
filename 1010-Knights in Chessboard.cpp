#include<bits/stdc++.h>
#define        ll       long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll m,n;
        cin>>m>>n;
        ll ans;
        if(m==1 or n==1)
        {
           ans=max(m,n);
        }
       else if(m==2 or n==2)
       {
           if(n==2)swap(m,n);
           ans=0;
           ll z=0;
           for(int i=1;i<=n;i++){
            if(z<2 and z>-1){
            ans=ans+2;
            }
            z++;
            if(z==2)z=-2;
           }
       }
        else if(m%2==1 and n%2==1){
            ans=(m*n)/2 +1;
        }
       else {
        ans=(m*n)/2;
       }
        printf("Case %lld: %lld\n",i,ans);
    }
    return 0;
}
