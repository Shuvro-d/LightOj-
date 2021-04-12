#include<bits/stdc++.h>
#define        ll      long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string s;
        cin>>s;
        if(s[4]=='s')cout<<"Case "<<i<<": "<<s<<endl;
        else{
            cout<<"Case "<<i<<": https";
            for(ll i=4;i<s.size();i++){
                cout<<s[i];
            }
            cout<<endl;
        }
    }
    return 0;
}

