#include<bits/stdc++.h>
#define        ll      long long int
using namespace std;
string multiply(string num1,string num2)
{
    ll len1=num1.size();
    ll len2=num2.size();
    vector<ll>result(len1+len2,0);
    ll in1=0;
    ll in2=0;
    for(ll i=len2-1;i>=0;i--)
    {
        ll carry=0;
        in1=0;
        ll digit1=num2[i]-'0';
        for(ll j=len1-1;j>=0;j--)
        {
            ll digit2=num1[j]-'0';
            ll ans=digit1*digit2 + result[in1+in2] + carry;
            carry=ans/10;
            result[in1+in2]=ans%10;
            in1++;
        }
        if(carry>0)result[in1+in2]+=carry;
        in2++;
    }

    ll i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;
    if (i == -1)return "0";
    string s = "";
    while (i >= 0)
    s += std::to_string(result[i--]);

    return s;
}
string divide(string number, ll divisor)
{
    string ans;
    ll idx = 0;
    ll temp = number[idx] - '0';
    while (temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');
    while (number.size() > idx) {
        ans += (temp / divisor) + '0';
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }
    if (ans.length() == 0)
        return "0";
    return ans;
}
string change(ll n)
{
    return to_string(n);
}
int main()
{
  ll t;
  cin>>t;
  for(ll i=1;i<=t;i++){
    string num;
    ll divisor;
    cin>>num;
    cin>>divisor;
    if(divisor<0)divisor*= -1;
    if(num.at(0)=='-')num=num.substr(1);
    string s1=change(divisor);
    string ansofdiv=divide(num,divisor);
    string ansofmul=multiply(ansofdiv,s1);
    if(ansofmul==num)printf("Case %d: divisible\n",i);
    else printf("Case %d: not divisible\n",i);
  }
    return 0;
}

