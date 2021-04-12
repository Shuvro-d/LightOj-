#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
using namespace std;
string dec_to_bin(int n) {
    string ret = "";
    for (int i = 31; i >= 0; i--) {
        int k = 1 << i;
        ret += (n & k)? '1' : '0';
    }
    return ret;
}

int bin_to_dec(string s) {
    int ret = 0;
    for (int i = 0; i < 32; i++)
        ret = (2*ret) + s[i] - '0';
    return ret;
}

int main()
{
    int t, ca = 1;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string bin = dec_to_bin(n);
        next_permutation(bin.begin(), bin.end());
        cout<<"Case "<<ca++<<": "<<bin_to_dec(bin)<<endl;
    }

    return 0;
}

