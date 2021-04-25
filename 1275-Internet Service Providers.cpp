#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;
int main()
{
    ll test;
    cin>>test;
    ll n,c;
    for(ll t=1;t<=test;t++)
    {
        cin>>n>>c;
        ll ans;
        if(n==0){
            ans=0;
        }
        else{
          ll ans1=c/(n*2);
          ll ans2= c/(n*2)+1;
          ll res1=(ans1*c)-(n*ans1*ans1);
          ll res2=(ans2*c)-(n*ans2*ans2);
            if(res1>=res2)ans=ans1;
            else ans=ans2;
        }
        //cout<<ans<<endl;
        printf("Case %lld: %lld\n",t,ans);
    }
}

