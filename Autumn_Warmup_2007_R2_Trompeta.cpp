#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("trompeta.in");
ofstream fout("trompeta.out");
int n,m,i,c,up;
char vect1[1000005], vect2[1000005];
int main()
{
    fin>>n>>m;
    fin>>(vect2+1);
    up=1;
    vect1[1]=vect2[1]-'0';
    for(i=2;i<=n;++i)
    {
        c=vect2[i];
        while(vect1[up]<c&&up+n-i>=m&&up)
        --up;
        ++up;
        vect1[up]=c;
    }
    fout<<(vect1+1);
    return 0;
}
