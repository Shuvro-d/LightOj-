
#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;
ll status[10000001];
vector<ll> prime;
void sieve(ll N)
{
     for(ll i = 2; i <= N>>1; i++ )
            status[i] = 0;
        int  sqrtN = int( sqrt((double) N ));
        for(ll i = 3; i <= sqrtN; i+=2 )
        {
            if( status[i>>1] == 0 )
            {
                for(ll  j = i * i; j <= N; j += i+i )
                    status[j>>1] = 1;
            }
        }
        prime.push_back(2);
        ll res=1;
        for(ll i = 3; i <= N; i+=2 )
        {
            if( status[i>>1] == 0 )
            {
                prime.push_back(i);
                res++;
            }
        }
}
bool b_s(ll x,ll st)
{
    ll left=st,right=prime.size()-1;
    ll mid;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(prime[mid]==x)
        {
            return true;
        }
        if(prime[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
     return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;
    cin>>test;
    sieve(10000001);
    vector<bool>a;
    for(ll i=0;i<10000001;i++){
        a.push_back(false);
    }
    for(ll i=0;i<prime.size();i++){
        ll x=prime[i];
        a[x]=true;
    }
    for(ll t=1;t<=test;t++)
    {
     ll n;
     cin>>n;
     ll cnt=0;
      for(ll i=0;i<prime.size();i++)
      {
          if(prime[i]>n/2)break;
          ll num=n-prime[i];
         if(a[num])cnt++;
      }
      //cout<<cnt<<endl;
     printf("Case %lld: %lld\n",t,cnt);
    }
    return 0;
}
