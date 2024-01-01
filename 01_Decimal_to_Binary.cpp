#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class d_to_b
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
      ll temp = a1 % 2;
      a1 = a1 / 2;
      p2.push_back(temp+48);
    }
    reverse(p2.begin(), p2.end());
    if(a2!=0){
      p2.push_back('.');
    }
    ll k = a2;
    ll t = 0;
    while (k)
    {
      k = k / 10;
      t++;
    }
    t = pow(10, t);
    t++;
    int l=10;
    while (a2 != 0 && l!=0)
    {
      l--;
      a2 = a2 * 2;
      p2.push_back((a2 / t)+48);
      a2 = a2 % t;
    }
    
    // reverse(p2.second.begin(), p2.second.end());
    
    return p2;
  }
};