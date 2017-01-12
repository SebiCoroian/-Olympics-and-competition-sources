#include<iostream>

const int INF=0x3f3f3f3f;

using namespace std;



int main()
{
    int c[200000], d[200000];
    bool valid = 1;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>c[i]>>d[i];

    int maxim = INF, curent = INF;
    for(int i = 0; i < n; i++)
    {
        if(d[i] == 2 && curent >= 1900)
        {
            int aux = curent - 1900 + 1;
            curent -= aux;
            maxim -= aux;
        }
        curent += c[i];
    }

    curent = maxim;

    for(int i = 0; i < n; i++)
    {
        if(d[i] == 1 && curent < 1900)
        {
            valid = 0;
            break;
        }
        curent += c[i];
    }

    if(!valid)
        cout<<"Impossible\n";
    else
    if(maxim == INF)
    cout<<"Infinity\n";
    else
    cout<<curent;

    return 0;
}
