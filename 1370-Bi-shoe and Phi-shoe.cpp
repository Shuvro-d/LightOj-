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
vector<int>primes;
long long int siv[m];
void sieve()
{
    for(ll i=3;i<m;i+=2)
        if(!siv[i])
        for(ll j=i*i;j<m;j+=i+i)
        siv[j]=1;
    primes.push_back(2);
    for(ll i=3;i<m;i+=2)
        if(!siv[i])primes.push_back(i);
    return;
}
int main()
{
    sieve();
   int t;
   cin>>t;
   for(int p=1;p<=t;p++)
   {
       int n;
       cin>>n;
       int a[n];
       ll sum=0;
       for(int i=0;i<n;i++){
        cin>>a[i];
        auto it=upper_bound(primes.begin(),primes.end(),a[i]);
        sum+=*it;
       }
       printf("Case %d: %lld Xukha\n",p,sum);
   }
    return 0;
}

