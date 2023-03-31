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

int legendJosephus(int x, int y)
{
    if(x == 1) return 0;
    return (legendJosephus(x-1,y)+y)%x;
}

int get_legemdName(int n, int k)
{
    int r = 0;
    for (int i = 2; i <= n; i++)
        r = (r + k) % i;

    return r;
}

int main()
{

    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    int n, x, y, j, num, pulo;

    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d",&x,&y);
        //printf("Case %d: %d\n",i+1,legendJosephus(x,y)+1);
        printf("Case %d: %d\n",i+1,get_legemdName(x,y)+1);
    }
    return 0;
}
