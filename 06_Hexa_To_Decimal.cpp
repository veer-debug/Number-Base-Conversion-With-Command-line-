#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class H_to_d
{
public:
    vector<char> p2;
    vector<char> Ans(string s)
    {
        vector<int> s0;
        vector<int> s1;
        // making two number
        int t1 = 0;
        for (int a = 0; a < s.size(); a++)
        {
            int k = s[a] - '0';
            if (s[a] == '.')
            {
                t1 = 1;
            }
            else if (s[a] == 'a' || s[a] == 'A')
            {
                k = 10;
            }
            else if (s[a] == 'b' || s[a] == 'B')
            {
                k = 11;
            }
            else if (s[a] == 'c' || s[a] == 'C')
            {
                k = 12;
            }
            else if (s[a] == 'd' || s[a] == 'D')
            {

                k = 13;
            }
            else if (s[a] == 'e' || s[a] == 'E')
            {

                k = 14;
            }
            else if (s[a] == 'f' || s[a] == 'F')
            {

                k = 15;
            }

            if (t1 == 0 && s[a] != '.')
            {
                s0.push_back(k);
            }
            else if (t1 == 1 && s[a] != '.')
            {
                s1.push_back(k);
            }
        }
        // on first vector
        int aa = 0;
        ll sum = 0;
        for (int a = s0.size() - 1; a >= 0; a--)
        {
            sum = sum + s0[a] * (pow(16, aa));
            aa++;
        }
        //     cout<<sum<<endl;//i am
        aa = 1;
        double sum1 = 0;
        for (int a = 0; a < s1.size(); a++)
        {
            sum1 = sum1 + (s1[a] / pow(16, aa));
            aa++;
        }
        ll temp = sum1 * 10000000;
        //     cout<<temp<<endl;// its me
        while (sum != 0)
        {
            p2.push_back(char(sum % 10) + '0');
            sum = sum / 10;
        }
        reverse(p2.begin(), p2.end());
        if (s1.size() != 0)
        {
            p2.push_back('.');
            vector<char> v1;
            while (temp != 0)
            {
                v1.push_back(char((temp % 10) + '0'));
                temp = temp / 10;
            }
            reverse(v1.begin(), v1.end());
        for (auto t : v1)
        {
            p2.push_back(t);
        }
        }

        return p2;
    }
};
