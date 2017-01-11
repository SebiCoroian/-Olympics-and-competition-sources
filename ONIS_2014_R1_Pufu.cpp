#include <cstring>
#include <stack>
#include <vector>
#include<fstream>
using namespace std;
ifstream fin("pufu.in");
ofstream fout("pufu.out");
void test(int n)
{
    string s;
int cioco=0,cas=0,sare=0;
for(int i=1;i<=n;i++)
{
    fin>>s;
    if(s=="ciocolata")
        cioco++;
    if(s=="cascaval")
        cas++;
    if(s=="sare")
        sare++;
}
fout<<cioco<<" "<<cas<<" "<<sare<<'\n';
 
}
int main()
{
int t,n;
fin>>t;
for(int i=1;i<=t;i++)
{
    fin>>n;
    test(n);
}
 
}
