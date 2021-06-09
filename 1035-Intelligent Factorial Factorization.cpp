#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
#define        frin          for(ll i=0;i<n;i++)
#define        frjn          for(ll j=0;j<n;j++)

const int   mod=1e9+7;
using namespace std;
#define m 1000010
long long int primes[m], cnt, siv[m];
void sieve()
{
    long long int i, j;
    for (i=3; i<m; i+=2)
        if(!siv[i])
            for (j=i*i; j<m; j+=i+i)
                siv[j]=1;
    primes[cnt++]=2;
    for (i=3; i<m; i+=2)
        if(!siv[i]) primes[cnt++]=i;
    return;
}
void factorize(int n,map<int,int>&mp)
{
    for(int i=0;i<m and primes[i]*primes[i]<=n;++i)
    {
        if(n%primes[i]==0){
            while(n%primes[i]==0){
                mp[primes[i]]++;
                n/=primes[i];
            }
        }
    }
    if(n!=1)mp[n]++;
}


int main()
{
    sieve();
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=2;i<=n;i++){
            factorize(i,mp);
        }
        printf("Case %d: %d = ",k,n);
        int i=0;
        int sz=mp.size();
        for(auto it=mp.begin();it!=mp.end();it++,i++)
        {
            printf("%d (%d)",it->first,it->second);
            if(i==sz-1)cout<<endl;
            else printf(" * ");
        }
    }
    return 0;
}

