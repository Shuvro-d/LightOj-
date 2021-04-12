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
        ll n,m;
        cin>>n>>m;
        ll v[n];
        for(ll in=0; in<n; in++)
        {
            cin>>v[in];
        }
        while(m--)
        {
            ll z=2;
            char c;
            ll sos[3]={0,0,0};
            for(ll kol=0; kol<z; kol++)
            {
                if(kol==0){
                    cin>>c;
                }
                else{
                    cin>>sos[kol];
                }
                if(c=='R' and kol==0)break;
                else if(c=='P' and kol==0)z++;
            }
            if(c=='S')
            {
                ll d=sos[1];
                for(ll li=0; li<n; li++)v[li]+=d;
            }
            else if(c=='M')
            {
                ll d=sos[1];
                for(ll lo=0; lo<n; lo++)v[lo]=v[lo]*d;
            }
            else if(c=='D')
            {
                ll d=sos[1];
                for(ll la=0; la<n; la++)v[la]=v[la]/d;
            }
            else if(c=='P')
            {
                ll y=sos[1];
                ll z=sos[2];
                swap(v[y],v[z]);
            }
            else if(c=='R')
            {
                ll ara[n];
                for(ll q=0,e=n-1;q<n;q++,e--)ara[q]=v[e];
                for(ll q=0;q<n;q++)v[q]=ara[q];
            }
        }
        printf("Case %lld:\n",test);
        for(ll last=0; last<n; last++)
        {
            if(last==n-1)cout<<v[last]<<endl;
                else cout<<v[last]<<" ";
        }
    }
    return 0;
}

