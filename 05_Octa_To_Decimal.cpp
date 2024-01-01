#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class O_to_d
{
public:
    pair<ll, ll> p1;
    vector<char> p2;
    vector<char> Ans()
    {
        ll a1 = p1.first, a2 = p1.second;
        ll kk = 0;
        ll k1 = a1;
        ll sec = 0;
        while (a1 != 0)
        {
            ll temp = a1 % 10;
            sec = sec + temp * pow(8, kk);
            a1 = a1 / 10;
            kk++;
        }
        while (sec != 0)
        {
            ll tt = sec % 10;
            p2.push_back(tt + 48);
            sec = sec / 10;
        }
        reverse(p2.begin(), p2.end());
        if (a2 != 0)
        {
            p2.push_back('.');
            ll total = a2;
            int n = 0;
            while (total != 0)
            {
                total = total / 10;
                n++;
            }
            float sum = 0;
            while (n)
            {
                ll temp1 = a2 % 10;
                sum = sum + (temp1 / (pow(8, n)));
                a2=a2/10;
                n--;
            }
            ll tol=sum*1000000;
            ll me=0;
             while(tol!=0){
                int tem1=tol%10;
                me=me*10+tem1;
                tol=tol/10;
             }
             while (me!=0)
             {
                int tem2=me%10;
                p2.push_back(tem2+48);
                me=me/10;
             }
             
        }
        return p2;
    }
};