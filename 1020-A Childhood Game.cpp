#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
using namespace std;
int main()
{
    ll test;
    cin>>test;
    for(ll t=1; t<=test; t++)
    {
        ll n;
        string s;
        cin>>n>>s;
        string ans;
        printf("Case %lld: ",t);
        if(s == "Alice"){
        if (n%3 == 1) cout << "Bob\n" ;
        else cout << "Alice\n" ;
    }
    else {
        if (n%3 != 0) cout << "Bob\n" ;
        else cout << "Alice\n" ;
    }
    }
    return 0;
}

