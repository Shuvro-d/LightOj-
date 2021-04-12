#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int w,h;
        cin>>w>>h;
        char a[h][w];
        bool check[h][w];
        int x,y;
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='@')
                {
                    x=i;
                    y=j;
                }
            }
        }
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                check[i][j]=false;
            }
        }
        check[x][y]=true;
        queue< pair<int,int> > q;
        q.push({x,y});
        int cnt=0;
        int xx[]= {0,0,1,-1};
        int yy[]= {1,-1,0,0};
        while(!q.empty())
        {
            pair<int,int>v=q.front();
            q.pop();
            cnt++;
            int aa=v.first;
            int bb=v.second;
            for(int i=0; i<4; i++)
            {
                int cc=aa+xx[i];
                int dd=bb+yy[i];
                if(cc>=0 and cc<h and dd>=0 and dd<w and a[cc][dd]!='#')
                {
                    if(check[cc][dd]==false)
                    {
                        check[cc][dd]=true;
                        q.push({cc,dd});
                    }
                }
            }
        }
        cout<<"Case "<<k<<": "<<cnt<<endl;
    }
    return 0;
}
