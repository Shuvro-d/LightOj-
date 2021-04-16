#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         E      2.718281828
#define         PI      2 * acos (0.0)
#define        MAX       500
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int t=1;t<=test;t++)
    {
    double ab,ac,bc,rat;
    cin>>ab>>ac>>bc>>rat;
    double hp=(ab+ac+bc)/2;
    double areaofbigtriangle=sqrt(hp*(hp-ab)*(hp-ac)*(hp-bc));
    double areaoftrapezium=areaofbigtriangle/(rat+1);
    double areaofsmalltriangle=rat*areaoftrapezium;
    double ans=sqrt((pow(ab,2)*areaofsmalltriangle)/areaofbigtriangle);
    printf("Case %d: %.10lf\n",t,ans);
    }
    return 0;
}

