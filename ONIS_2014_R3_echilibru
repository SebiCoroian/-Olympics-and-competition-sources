#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("echilibru.in");
ofstream fout("echilibru.out");
int g[20];
int echilibru(int n,int total)
{
    int a,b,nra,nrb,i,j,put=(1<<n);
    for(i=0;i<put;i++)
    {
        a=b=nra=nrb=0;
        for(j=0;j<n;j++)
        {
            if((i&(1<<j))==(1<<j))                                                                                                                                                          ///CRISTOS DIN DEJ
                a+=g[j],nra++;
            else
                b+=g[j],nrb++;
        }
        if(a==b && nra==nrb) return 1;
    }
    return 0;
}
int main()
{
    int t,n,i,j,total,raspuns=0,rechi;
    fin>>t;
    for(i=0;i<t;i++)
    {
        total=0;
        fin>>n;
        n=2*n;
        for(j=0;j<n;j++) fin>>g[j],total+=g[j];
        rechi=echilibru(n,total);
        raspuns|=((1<<(t-i-1))*rechi);
    }
    fout<<raspuns<<"\n";
}
