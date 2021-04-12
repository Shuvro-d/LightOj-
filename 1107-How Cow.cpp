#include<bits/stdc++.h>
#define        ll      long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int m;
        cin>>m;
        printf("Case %d:\n",i);
        while(m--)
        {
            int a,b;
            cin>>a>>b;
            bool flag=false;
            if(a>=x1 and a<=x2){
                if(b>=y1 and b<=y2){
                    flag= true;
                }
            }
            if(flag)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}

