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

void getOffer(int t)
{
    int n,k;
    //cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        cout<<(n%k)+(n/k)<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    getOffer(t);
    //cout<<endl;

    return 0;
}
