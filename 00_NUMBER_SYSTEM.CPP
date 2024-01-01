#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#include "01_Decimal_to_Binary.cpp"
#include "02_Decimal_to_Octa.cpp"
#include "03_Decimal_to_Hexa.cpp"
#include "04_Binary_to_Decimal.cpp"
#include "05_Octa_To_Decimal.cpp"
#include "06_Hexa_To_Decimal.cpp"
pair<ll, ll> change(string);
pair<ll, ll> change1(vector<char>);
void display(vector<char>);
// pair<ll, ll> conv(pair<vector<ll>, vector<ll>>);

int main()
{
    int opt;
    string num;
    while (opt != 0)
    {
        cout << "Enter which operation do you want" << endl;
        cout << "01.Decimal To Binary" << endl
             << "02.Decimal To Octa" << endl
             << "03.Decimal To Hexa Decimal" << endl
             << "04.Binary  To Decimal" << endl
             << "05.Binary  To Octa" << endl
             << "06.Binary  To Hexa" << endl
             << "07.Octa    To Decimal" << endl
             << "08.Octa    To Binary" << endl
             << "09.Octa    To Hexa Decimal" << endl
             << "10.Hexa D  To Decimal"<<endl
             << "11.Hexa D  To Binary"<<endl
             << "12.Hexa D  To Octa"<<endl
             << "0.exit" << endl;
        cout << "--> ";
        cin >> opt;
        cout << endl
             << "Enter Your Number " << endl
             << "--> ";
        cin >> num;

        switch (opt)
        {
        case 1: // decimal to binary number bloak
        {
            d_to_b obj1;
            obj1.p1 = change(num);
            obj1.Ans();
            display(obj1.p2);
            break;
        }
        case 2: // decimal to octa decimal bloack
        {
            d_to_Octa obj1;
            obj1.p1 = change(num);
            obj1.Ans();
            display(obj1.p2);
            break;
        }
        case 3: // decimal to hexa decimal
        {
            d_to_hexa obj1;
            obj1.p1 = change(num);
            obj1.Ans();
            display(obj1.p2);
            break;
        }
        case 4: // binary to decimal
        {
            b_to_d obj1;
            obj1.p1 = change(num);
            obj1.Ans();
            display(obj1.p2);
            break;
        }
        case 5: // binary to octa
        {
            b_to_d obj;
            d_to_Octa obj1;
            obj.p1 = change(num);
            obj.p2 = obj.Ans();
            obj1.p1 = change1(obj.p2);
            display(obj1.Ans());
            break;
        }
        case 6: // binary to hexa
        {
            b_to_d obj;
            d_to_hexa obj1;
            obj.p1 = change(num);
            obj.p2 = obj.Ans();
            obj1.p1 = change1(obj.p2);
            display(obj1.Ans());
            break;
        }
        case 7: // Octa to Decimal
        {
            O_to_d obj1;
            obj1.p1 = change(num);
            obj1.Ans();
            display(obj1.p2);
            break;
        }
        case 8: // octa to binary
        {
            O_to_d obj;
            d_to_b obj1;
            obj.p1 = change(num);
            obj.p2 = obj.Ans();
            obj1.p1 = change1(obj.p2);
            display(obj1.Ans());
            break;
        }
        case 9: // Octa to Hexa
        {
            O_to_d obj;
            d_to_hexa obj1;
            obj.p1 = change(num);
            obj.p2 = obj.Ans();
            obj1.p1 = change1(obj.p2);
            display(obj1.Ans());
            break;
        }
        case 10:
        {
            H_to_d obj1;
            display(obj1.Ans(num));
            break;
        }
        case 11:
        {
            H_to_d obj;
            d_to_b obj1;
            obj1.p1=change1(obj.Ans(num));
            display(obj1.Ans());
            break;

        }
        case 12:
        {
            // H_to_d obj;
            // d_to_Octa obj1;
            // obj1.p1=change1(obj.Ans(num));
            // display(obj1.Ans());
            // break;
        }
        default:
        {
            exit(0);
        }
        }
    }
    return 0;
}

// convert string to pair
pair<ll, ll> change(string s)
{
    int aa = 0;
    int b = 0;
    int c = 0;
    pair<ll, ll> num;
    for (int a = 0; s[a] != '\0'; a++)
    {
        if (s[a] == '.')
        {
            c = 1;
        }
        else
        {

            if (c != 1 && s[a] != '.')
            {
                aa = aa * 10 + (s[a] - '0');
            }
            else if (c == 1 && s[a] != '.')
            {
                b = b * 10 + (s[a] - '0');
            }
        }
    }
    num.first = aa;
    num.second = b;
    return num;
}
// conver charector vector into pair
pair<ll, ll> change1(vector<char> num)
{
    pair<ll, ll> p1;
    p1 = {0, 0};
    int ch = 0;
    for (int a = 0; a < num.size(); a++)
    {
        if (num[a] == '.')
        {
            ch = 1;
        }
        else if (num[a] == 'A')
        {
            p1.first = p1.first * 10 + 10;
        }
        else if (num[a] == 'B')
        {
            p1.first = p1.first * 10 + 11;
        }
        else if (num[a] == 'C')
        {
            p1.first = p1.first * 10 + 12;
        }
        else if (num[a] == 'D')
        {
            p1.first = p1.first * 10 + 13;
        }
        else if (num[a] == 'E')
        {
            p1.first = p1.first * 10 + 14;
        }
        else if (num[a] == 'F')
        {
            p1.first = p1.first * 10 + 15;
        }
        else
        {
            if (ch == 0)
            {
                p1.first = p1.first * 10 + (num[a] - '0');
                // cout<<p1.first<<endl;
            }
            else
            {
                p1.second = p1.second * 10 + (num[a] - '0');
            }
        }
    }

    return p1;
}

// Display function
void display(vector<char> v)
{
    for (auto t : v)
    {
        cout << t;
    }
    cout << endl;
}
