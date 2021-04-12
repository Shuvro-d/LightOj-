#include<bits/stdc++.h>
#define        ll       long long int
#define      PI        3.1416
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
      ll me;
      ll lift;
      cin>>me>>lift;
      ll lifttravel=max(me,lift)-min(me,lift);
      ll toground=lifttravel+me;
      ll time=9+10+(toground*4);
      printf("Case %lld: %lld\n",test,time);
    }
    return 0;
}

