#include<bits/stdc++.h>
#define        ll      long long int
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n>10)cout<<n-10<<" "<<n-(n-10)<<endl;
    else cout<<0<<" "<<n<<endl;
  }
    return 0;
}

