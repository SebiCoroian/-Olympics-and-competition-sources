#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
ifstream fin("int.in");
ofstream fout("int.out");
vector < pair <int, int> > vect;
int nr;
bool comparare(pair <int, int> x,pair <int, int> y)
{
    return x.second<y.second;
}
int main()
{
    int x,y,c=0,poz=-9999999;
    fin>>nr;
    for(int i=1;i<=nr;i++)
    {
        fin>>x>>y;
        vect.push_back(make_pair(x,y));
 
    }
    sort(vect.begin(),vect.end(),comparare);
    for(int i=0;i<=nr;i++)
    {
        if(poz<vect[i].first)
            {c++;
            poz=vect[i].second-1;
            }
    }
    fout<<c;
 
 
