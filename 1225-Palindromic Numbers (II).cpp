#include<bits/stdc++.h>
#define        ll       long long int
#define   mx        6
using namespace std;
bool palindrome(string s)
{
    ll last=s.size()-1;
    for(ll i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[last])return false;
        last--;
    }
    return true;
}
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
       string s;
       cin>>s;
       if(palindrome(s)) printf("Case %lld: Yes\n",test);
       else printf("Case %lld: No\n",test);
    }
    return 0;
}

