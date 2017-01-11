#include <fstream>
#include <stack>
using namespace std;
ifstream fin ("par.in");
ofstream fout ("par.out");
stack<char> stiva;
int n, k;
char sir[5005];
int main()
{
    fin>>n;
    if (n % 2 == 1)
    {fout << -1;return 0;}
    for (int i = 0; i <= n; ++i)
        fin >> sir[i];
    for (int i = 0; i <= n; ++i)
    {
        if (sir[i] == '(')stiva.push('(');
        if (sir[i] == ')')
            if (stiva.empty() == true){k++;stiva.push('(');}
            else stiva.pop();
    }
    k+=(stiva.size()/2);
    fout<<k;
    fin.close();
    fout.close();
    return 0;
}
