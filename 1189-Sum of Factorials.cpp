#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
using namespace std;
ll multiply(ll x, ll res[], ll res_size)
{
    ll carry = 0;
    for (ll i=0; i<res_size; i++)
    {
        ll prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry  = prod/10;
    }
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
void factorial(ll n,vector<ll>&v)
{
    ll res[MAX];
    res[0] = 1;
    ll res_size = 1;
    for (ll x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
      ll o=1;
      ll sum=0;
      for(ll i=0; i<res_size; i++)
      {
          sum=sum+(res[i]*o);
          o=o*10;
      }
      v.push_back(sum);
}
int main()
{
    ll t;
    cin>>t;
   vector<ll>v;
    for(ll i=0;i<=20;i++)factorial(i,v);
    ll n;
    for(ll test=1; test<=t; test++)
    {
        cin>>n;
        vector<ll>ans;
        for(int i=v.size()-1; i>=0; i--)
        {
            if(v[i]<=n)
            {
                n-=v[i];
                ans.push_back(i);
            }

        }
        cout<<"Case "<<test<<": ";
        if(n==0)
        {
            for(int i=ans.size()-1; i>0; i--)
            {
                cout<<ans[i]<<"!+";
            }
            cout<<ans[0]<<"!\n";
        }
        else
            cout<<"impossible\n";
    }
    return 0;
}

