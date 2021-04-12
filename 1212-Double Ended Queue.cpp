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
        list<ll>v;
        printf("Case %lld:\n",test);
        while(m--){
            ll z=2;
            string s;
            ll num;
            for(ll l=0;l<z;l++){
                if(l==0){
                        cin>>s;
                        if(s=="popLeft" or s=="popRight")break;
                }
                else cin>>num;
            }
            if(s=="popLeft")
            {
                if(v.begin()==v.end())cout<<"The queue is empty"<<endl;
                else {
                        auto it=v.begin();
                        cout<<"Popped from left: "<<*it<<endl;
                        v.pop_front();
                }
            }
            else if(s=="popRight")
            {
                if(v.begin()==v.end())cout<<"The queue is empty"<<endl;
                else {
                        auto it=v.end();
                        it--;
                        cout<<"Popped from right: "<<*it<<endl;
                        v.pop_back();
                }
            }
            else if(s=="pushLeft")
            {
                if(v.size()==n)cout<<"The queue is full"<<endl;
                else
                {
                    v.push_front(num);
                    cout<<"Pushed in left: "<<num<<endl;
                }
            }
            else if(s=="pushRight")
            {
                if(v.size()==n)cout<<"The queue is full"<<endl;
                else
                {
                    v.push_back(num);
                    cout<<"Pushed in right: "<<num<<endl;
                }
            }
        }
    }
    return 0;
}

