#include<iostream>
#include<fstream>
#define DX 1<<20
using namespace std;
ifstream fin("pokemon3.in");
ofstream fout("pokemon3.out");
int v[25],mask,n,m,dp[DX];
int main()
{
    int i,j,a,need=0,mini=DX;
    fin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            fin>>a;
            v[i]|=(a<<j);
        }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=3;j++)
        {
            fin>>a;
            need|=(1<<(a-1));
        }
    }
 
    for(i=1;i<DX;i++) dp[i]=DX;
    for(i=0;i<DX;i++)
    {
        if((i&need)==need) mini=min(mini,dp[i]);
        for(j=0;j<n;j++)
            dp[i|v[j]]=min(dp[i|v[j]],dp[i]+1);
    }
    if(mini==DX)
        fout<<"-1\n";
    else
        fout<<mini;
}
