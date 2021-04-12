#include<bits/stdc++.h>
#define        ll      long long int
using namespace std;
ll a,b,c,d,e,f,n;
ll mod=10000007;
ll dp[10001];
ll fn(ll n)
{
    if(dp[n]!=-1)return dp[n]%mod;
     if (n == 0)
    {
        return a%mod;
    }
     if (n == 1)
    {
         return b%mod;
    }
    if (n == 2)
    {
           return c%mod;
    }
     if (n == 3)
    {
          return d%mod;
    }
   if (n == 4)
    {
           return e%mod;
    }
     if (n == 5)
    {
          return f%mod;
    }
        dp[n]=(fn(n-1)%mod + fn(n-2) %mod+ fn(n-3) %mod+ fn(n-4)%mod + fn(n-5)%mod + fn(n-6)%mod)%mod;
        return dp[n]%mod;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>a>>b>>c>>d>>e>>f>>n;
        dp[0]=a%mod;
        dp[1]=b%mod;
        dp[2]=c%mod;
        dp[3]=d%mod;
        dp[4]=e%mod;
        dp[5]=f%mod;
        cout<<"Case "<<i<<": "<<fn(n)%mod<<endl;
    }
    return 0;
}

