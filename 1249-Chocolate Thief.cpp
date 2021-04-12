#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
using namespace std;

int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
        ll n;
        cin>>n;
        string s;
       ll a,b,c;
       vector<pair<string,ll>>v;
       vector<ll>check;
        while(n--)
        {
             cin>>s>>a>>b>>c;
             v.push_back(make_pair(s,a*b*c));
             check.push_back(a*b*c);
        }
        //for(ll i=0;i<v.size();i++)cout<<v[i].first<<" = "<<v[i].second<<endl;
        sort(check.begin(),check.end());
        ll mx=check[check.size()-1];
        ll mn=check[0];
        if(mx==mn)printf("Case %lld: no thief\n",test);
        else{
            string thief;
            string victim;
            for(ll i=0;i<v.size();i++)
            {
                if(v[i].second==mx)thief=v[i].first;
                if(v[i].second==mn)victim=v[i].first;
            }
            printf("Case %lld: ",test);
            cout<<thief<<" took chocolate from "<<victim<<endl;
        }
    }
    return 0;
}

