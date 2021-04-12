#include<bits/stdc++.h>
#define        ll      long long int
using namespace std;
void b_s(ll x,ll &l,ll &h)
{
    ll left=0,right=10000000000;
    ll mid;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(x>=pow(mid,2) and x<=pow(mid+1,2))
        {
            l=mid;
            h=mid+1;
            return;
        }
        if(pow(mid,2)<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return;
}

int main()
{
    ll t;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        ll n;
        cin>>n;
        ll low,high;
        ll l,h;
        b_s(n,l,h);
        ll x,y;
        low=l*l;
        high=h*h;
        ll rnum=sqrt(n);
        //cout<<"low= "<<low<<"    high= "<<high<<"   l= "<<l<<"   h= "<<h<<endl;
        if(n==low or n==high)
        {
            if(n%2==0)
            {
                x=sqrt(n);
                y=1;
            }
            else
            {
                x=1;
                y=sqrt(n);
            }
           // cout<<x<<" "<<y<<endl;
        }
        else
        {
            ll disfromlow=n-low;
            ll disfromhigh=high-n;
            if(disfromhigh<disfromlow)
            {
                if(h%2==0)
                {
                   x=h;
                   y=high-n+1;
                }
                else
                {
                    x=high-n+1;
                    y=h;
                }
            }
            else if(disfromhigh>disfromlow)
            {
                 if(l%2==0)
                {
                   x=l+1;
                   y=n-low;
                }
                else
                {
                    x=n-low;
                    y=l+1;
                }
            }
        }
        //cout<<low<<" "<<high<<endl;
         printf("Case %lld: %lld %lld\n",i,x,y);
    }
    return 0;
}

