

/*
*********************************
*                               *
*     MD MEZBAH UDDIN           *
*     Nantong University(China) *
*     CSE                       *
*                               *
*                               *
*                               *
********************************* */
//https://www.beecrowd.com.br/judge/en/problems/view/3299
#include <iostream>
#define eps le-6
#define ll long long
int n;
using namespace std;

void getUnluckynumber(ll unsigned int n)
{
    ll unsigned int m, r;
    bool sorte = false;

    //cin >> n;

    m = n;
    while (m > 0)
    {
        r = m % 10;
        if (r == 3 and (m/10)%10 == 1)
        {
            sorte = true;
            break;
        }
        m /= 10;
    }

    cout << n << (!sorte? " NO" : "") << " es de Mala Suerte" << endl;
}

int main()
{

    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    ll unsigned int n;
    cin >> n;
    getUnluckynumber(n);

    return 0;
}
