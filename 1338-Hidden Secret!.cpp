#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
using namespace std;
int main()
{
   ll tt;
   cin>>tt;
   string s,t;
   getline(cin, s);
  for(ll test=1;test<=tt;test++)
   {
      getline(cin,s);
      getline(cin,t);
     vector<char>v1;
     vector<char>v2;
     for(ll i=0;i<s.size();i++)
     {
       if(s[i]!=' ')v1.push_back(s[i]);
     }
     for(ll i=0;i<t.size();i++)
     {
       if(t[i]!=' ')v2.push_back(t[i]);
     }
     for(ll i=0;i<v1.size();i++)
     {
       if(v1[i]>='A' and v1[i]<='Z')v1[i]+=32;
     }
     for(ll i=0;i<v2.size();i++)
     {
       if(v2[i]>='A' and v2[i]<='Z')v2[i]+=32;
     }
     sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end());
     if(v1==v2)printf("Case %lld: Yes\n",test);
     else printf("Case %lld: No\n",test);
   }
    return 0;
}
