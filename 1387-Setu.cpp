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
        ll m;
        cin>>m;
        printf("Case %lld:\n",test);
        ll num=0;
        while(m--)
        {
            vector<string>v;
            for(ll i=0; i<2; i++)
            {
                string s;
                cin>>s;
                v.push_back(s);
                if(s=="report")break;
            }

            if(v[0]=="donate")
            {
                ll n;
                stringstream geek(v[1]);
                geek >> n;
                num=num+n;
            }
            else cout<<num<<endl;
        }
    }
    return 0;
}

