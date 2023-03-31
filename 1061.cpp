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
#include<bits/stdc++.h>
using namespace std;

#define eps le-6
#define ll long long
#define NTU int
#define s string

void getEventime()
{
     int d = 0, h = 0, m = 0, s = 0;
    int df = 0, hf = 0, mf = 0, sf = 0;
    char dia[4];
    char pontos[3];
    char dia1[4];
    char pontos1[3];

    cin.get(dia,4);
    cin >> d;
    cin >> h;
    cin.get(pontos, 3);
    cin >> m;
    cin.get(pontos, 3);
    cin >> s;
    cin.getline(dia,0);
    cin.get(dia1,4);
    cin >> df;
    cin >> hf;
    cin.get(pontos1, 3);
    cin >> mf;
    cin.get(pontos1, 3);
    cin >> sf;

    long dur = (df*86400 + hf*3600 + mf*60 + sf) - (d*86400 + h*3600 + m*60 + s);
    cout << dur/86400 << " dia(s)\n";
    cout << (dur%86400)/3600 << " hora(s)\n";
    cout << ((dur%86400)%3600)/60 << " minuto(s)\n";
    cout << ((dur%86400)%3600)%60 << " segundo(s)\n";
}

int main()
{
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);

    getEventime();

    return 0;
}
