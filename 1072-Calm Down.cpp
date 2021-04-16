
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
    double R,n;
    cin>>R>>n;
    double angle=(360/(2*n))*(PI/180);
    double sine=sin(angle);
    double r=(sine*R)/(1+sine);
    printf("Case %d: %.10lf\n",t,r);
    }
    return 0;
}
