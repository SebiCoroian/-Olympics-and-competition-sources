#include <fstream>
#include <stack>
#include<iostream>
#include <vector>
using namespace std;
ifstream fin ("editor.in");
ofstream fout ("editor.out");
int x,n;
char c;
 
vector <char> vect;
stack <char> S;
 
void basic()
{
    for (int i = 0; i < vect.size()-1; i++)
    {
        if ((vect[i] == ')' || vect[i] == ']' )&& S.empty() == true)
        {
            fout << ":(";
            return;
        }
        if (vect[i] == '[' || vect[i] == '(') S.push(vect[i]);
        else
        {
            if ((vect[i] == ']' && S.top() == '(') || (vect[i] == ')' && S.top() == '['))
            {
                fout << ":(";
                return;
            }
            if ((vect[i] == ']' && S.top() == '[') || (vect[i] == ')' && S.top() == '(')) S.pop();
        }
    }
    if (S.empty())
        fout << ":)";
    else
        fout << ":(";
}
 
int main()
{
    fin >> x;
    for (int t = 0; t < x; t++)
    {
        c = 0;
        vect.clear();
        while(!S.empty())
            S.pop();
        while (c != 'E')
        {
            fin >> c;
            if (c == '*' && vect.empty() == false) vect.erase(vect.end()-1);
            else if (c != '*') vect.push_back(c);
        }
        if (vect.size() % 2 == 0)
            fout << ":(";
        else
            basic();
        fout << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
