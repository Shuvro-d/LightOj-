#include<bits/stdc++.h>
#define        ll      long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        stack<string>backward;
        stack<string>forward;
        string current="http://www.lightoj.com/";
        string s;
        printf("Case %d:\n",i);
        while(cin>>s)
        {
            if(s=="QUIT")break;
            if(s=="VISIT"){
                string ss;
                cin>>ss;
                backward.push(current);
                current=ss;
                cout<<current<<endl;
                stack<string>news;
                forward=news;
            }
            if(s=="BACK")
            {
                if(backward.size()==0)
                        cout<<"Ignored"<<endl;
                else{
                forward.push(current);
                current=backward.top();
                backward.pop();
                cout<<current<<endl;
                }
            }
            if(s=="FORWARD")
            {
                if(forward.size()==0)cout<<"Ignored"<<endl;
                else{
                    backward.push(current);
                    current=forward.top();
                    forward.pop();
                    cout<<current<<endl;
                }
            }
        }
    }
    return 0;
}

