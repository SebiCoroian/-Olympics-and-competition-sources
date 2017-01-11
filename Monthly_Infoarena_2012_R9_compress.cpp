#include<fstream>
#include<iostream>
#include<cstring>
using namespace std;
ifstream fin("compress.in");
ofstream fout("compress.out");
 
 
int main()
{
 
    int secventa=1;
    char c;
    string s;
    fin>>s;
    for(int i=0;i<s.size();i++)
    {
        c=s[i];
        if(s[i+1]==s[i])
            secventa++;
        else
        {fout<<c<<secventa;
         secventa=1;}
    }
    fin.close();
    fout.close();
    return 0;
}
