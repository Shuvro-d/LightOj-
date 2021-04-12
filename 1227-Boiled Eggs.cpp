#include<bits/stdc++.h>
#define        ll       long long int
#define   mx        6
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
        ll n,p,q;
        cin>>n>>p>>q;
         ll a[n];
         for(ll i=0;i<n;i++)cin>>a[i];
         sort(a,a+n);
         ll sum=0;
         ll num=0;
         for(ll i=0;i<n;i++){
            if((sum+a[i])<=q and (num+1)<=p){
                num++;
                sum=sum+a[i];
            }
            else break;
         }
         printf("Case %lld: %lld\n",test,num);
    }
    return 0;
}

