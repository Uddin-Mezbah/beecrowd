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

void getTime()
{
    NTU a, b, c, d;
    NTU dif;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    dif = ((b*60)+d) - ((a*60)+c);
    if(dif<=0) dif += 24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);
}

int main()
{
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);

    getTime();

    return 0;

}
