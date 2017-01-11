#include<fstream>
 
using namespace std;
unsigned long long a,b,c,aux;
 
ifstream fin("serviciu.in");
ofstream fout("serviciu.out");
 
int main()
{
int c,b,n,maxim,minim,xmaxim=0,val;
fin>>n;
for(int i=1;i<=n;i++)
{
    fin>>c>>b;
    if(c>=b)
        {maxim=c;
         minim=b;}
    else
        {maxim=b;
         minim=c;}
    if((maxim-minim)<=((2*n)-maxim+minim))
        val=(maxim-minim);
    else
        val=(2*n-maxim+minim);
 
    if(val>xmaxim)
        xmaxim=val;
}
fout<<xmaxim;
 
fin.close();
fout.close();
 
return 0;
 
}
