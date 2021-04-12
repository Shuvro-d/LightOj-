#include<bits/stdc++.h>
#define        ll       long long int
#define   mx        6
using namespace std;
ll check(ll a)
{
    for(ll i=1;i<=3;i++)
    {
        ll div=(a+3-i)/3;
        ll mul=div*3;
        if(mul==(a+3-i))return i;
    }
}
int main()
{
    ll t;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
        ll a,b;
        cin>>a>>b;
        ll totalnum=b-a+1;
        ll checkvalueofa=check(a);
        ll checkvalueofb=check(b);
        ll startvalue;
        ll finishvalue;
        if(checkvalueofa==1)startvalue=a;
        else if(checkvalueofa==2)startvalue=a+2;
        else startvalue=a+1;
        if(checkvalueofb==1)finishvalue=b;
        else if(checkvalueofb==2)finishvalue=b-1;
        else finishvalue=b-2;
        ll numforsub=((finishvalue-startvalue)/3)+1;
        ll ans=totalnum-numforsub;
        printf("Case %lld: %lld\n",test,ans);
    }
    return 0;
}
