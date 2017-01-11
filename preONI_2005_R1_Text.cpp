#include<fstream>
#include<string>
#include<strings.h>
using namespace std;
ifstream fin("text.in");
ofstream fout("text.out");
 
int main()
{
    string s;
    int cnt=0,L=0,ma;
    char c,c2;
    while(fin>>s)
    {
        c2='#';
    for (int i=0; i<s.size(); i++)
    {
        c=s[i];
        if((c>='a' && c<='z')||(c>='A' && c<='Z'))
        {
            L++;
            if((c2<'a' || c2>'z') && (c2<'A' || c2>'Z') )
                cnt++;
        }
        c2=c;
    }}
 
    ma=L/cnt;
    fout<<ma;
    fin.close();
    fout.close();
 
}
