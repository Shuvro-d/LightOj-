#include<bits/stdc++.h>
#define        ll       long long int
#define   mx        6
using namespace std;
ll binaryToDecimal(ll n)
{
    ll num = n;
    ll dec_value = 0;
    ll base = 1;
    ll temp = num;
    while (temp) {
        ll last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}
ll convert(vector<ll>&a, string s)
{
    vector<char>v;
        ll x=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='.' or i==s.size()-1){
                if(i==s.size()-1)v.push_back(s[i]);
                reverse(v.begin(),v.end());
                ll base=1;
                for(ll j=0;j<v.size();j++)
                {
                    ll num=v[j]-'0';
                    a[x]=a[x]+num*base;
                    base*=10;
                }
                vector<char>vv;
                v=vv;
                x++;
            }
            else{
                v.push_back(s[i]);
            }
}
}
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
        string one;
        string two;
        cin>>one;
        cin>>two;
        vector<ll>a={0,0,0,0};
        vector<ll>b={0,0,0,0};
        convert(a,one);
        convert(b,two);
        vector<ll>c;
        for(ll i=0;i<b.size();i++)c.push_back(binaryToDecimal(b[i]));
        bool flag=true;
         for(ll i=0;i<a.size();i++)if(a[i]!=c[i])flag=false;
         if(flag) printf("Case %lld: Yes\n",test);
         else printf("Case %lld: No\n",test);
    }
    return 0;
}

