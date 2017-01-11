#include <fstream>
#include <cstring>
using namespace std;
int poz[100002], st[100002];
char s[100002];
int n1, m, var, n;
ifstream fin("parantezare.in");
ofstream fout("parantezare.out");
int main()
{
    fin.getline(s, 100020);
    n=strlen(s);
    for(int i=0; i<n; ++i)
        {
            if(s[i]=='(')
                {
                    n1++;
                    st[n1]=i;
                }
            else if(s[i]==')')
               {
                      poz[st[n1]]=i;
                      n1--;
               }
 
 
        }
    fin>>m;
    for(int i=1;i<=m; ++i)
        fin>>var,
        fout<<poz[var]<<" ";
        fout<<"\n";
    fin.close();
    fout.close();
    return 0;
}
