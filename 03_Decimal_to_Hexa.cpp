#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class d_to_hexa
{
public:
    pair<ll, ll> p1;
    vector<char> p2;
    vector<char> Ans()
    {
        ll a1 = p1.first, a2 = p1.second;
        ll sec = 0;
        while (a1 != 0)
        {
            ll temp = a1 % 16;
            a1 = a1 / 16;
            if (temp == 10)
            {
                p2.push_back('A');
            }
            else if (temp == 11)
            {
                p2.push_back('B');
            }
            else if (temp == 12)
            {
                p2.push_back('C');
            }
            else if (temp == 13)
            {
                p2.push_back('D');
            }
            else if (temp == 14)
            {
                p2.push_back('E');
            }
            else if (temp == 15)
            {
                p2.push_back('F');
            }
            else
            {
                p2.push_back(temp + 48);
            }
        }
        reverse(p2.begin(), p2.end());
        if (a2 != 0)
        {
            p2.push_back('.');
        }
        ll k = a2;
        int t = 0;
        while (k)
        {
            k = k / 10;
            t++;
        }
        t = pow(10, t);
        int l = 15;
        t++;
        while (a2 != 0 && l != 0)
        {   
            a2 = a2 * 16;
            ll temp=a2/t;
             a2 = a2 % t;
             if (temp == 10)
            {
                p2.push_back('A');
            }
            else if (temp == 11)
            {
                p2.push_back('B');
            }
            else if (temp == 12)
            {
                p2.push_back('C');
            }
            else if (temp == 13)
            {
                p2.push_back('D');
            }
            else if (temp == 14)
            {
                p2.push_back('E');
            }
            else if (temp == 15)
            {
                p2.push_back('F');
            }
            else
            {
                p2.push_back(temp + '0');
            }
           l--;
        }
        return p2;
    }
};