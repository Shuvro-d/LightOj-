#include<bits/stdc++.h>
#define        ll      long long int
using namespace std;
int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                cnt++;
            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[1001][2];
    for(int i=0;i<=1000;i++){
        a[i][1]=countDivisors(i);
        a[i][0]=i;
    }
    int k=1001;
    while(k--){
        for(int i=0;i<1000;i++){
            if(a[i+1][1]<a[i][1]){
                swap(a[i][0],a[i+1][0]);
                swap(a[i][1],a[i+1][1]);
            }
            else if(a[i+1][1]==a[i][1] and a[i+1][0]>a[i][0]){
                swap(a[i][0],a[i+1][0]);
                swap(a[i][1],a[i+1][1]);
            }
        }
    }
    int z;
    cin>>z;
    for(int i=1;i<=z;i++)
    {
        int s;
        cin>>s;
        printf("Case %d: %d\n",i,a[s][0]);
    }
    return 0;
}


