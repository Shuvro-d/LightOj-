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
        ll a[n];
        for(ll i=0; i<n; i++)cin>>a[i];
        ll sum=0;
        ll sub1=a[0];
             if(sub1==2)sum=0;
            else if(sub1<=7 and sub1>2)sum=1;
            else if(sub1<=12 and sub1>7)sum=2;
            else if(sub1<=17 and sub1>12)sum=3;
            else if(sub1<=22 and sub1>17)sum=4;
            else if(sub1<=27 and sub1>22)sum=5;
            else if(sub1<=32 and sub1>27)sum=6;
            else if(sub1<=37 and sub1>32)sum=7;
            else if(sub1<=42 and sub1>37)sum=8;
            else if(sub1<=47 and sub1>42)sum=9;
            else if(sub1<=52 and sub1>47)sum=10;

        for(ll i=1; i<n; i++)
        {
            ll sub=a[i]-a[i-1];
            if(sub<=5 and sub>0)sum++;
            else if(sub<=10 and sub>5)sum=sum+2;
            else if(sub<=15 and sub>10)sum=sum+3;
            else if(sub<=20 and sub>15)sum=sum+4;
            else if(sub<=25 and sub>20)sum=sum+5;
            else if(sub<=30 and sub>25)sum=sum+6;
            else if(sub<=35 and sub>30)sum=sum+7;
            else if(sub<=40 and sub>35)sum=sum+8;
            else if(sub<=45 and sub>40)sum=sum+9;
            else if(sub<=50 and sub>45)sum=sum+10;
        }
        printf("Case %lld: %lld\n",test,sum);
    }
    return 0;
}

