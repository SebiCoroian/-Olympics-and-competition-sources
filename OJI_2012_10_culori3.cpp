#include<iostream>
#include<fstream>
#include<cmath>
#include<vector>
using namespace std;

//this source includes big numbers
 
int x[1000];
#define BASE 10 ;
 
void Atrib0(int H[]) {
  H[0] = 0;
}
void AtribValue(int H[], long long X) {
  H[0] = 0;
  while (X) {
      ++H[0];
      H[H[0]] = X % BASE;
      X /= BASE;
  }
}
void Mult(int H[], long long X)
/* H <- H*X */
{ int i;
  unsigned long T=0;
 
  for (i=1;i<=H[0];i++)
    { H[i]=H[i]*X+T;
      T=H[i]/10;
      H[i]=H[i]%10;
    }
  while (T) /* Cat timp exista transport */
    { H[++H[0]]=T%10;
      T/=10;
    }
}
 
int main()
{
    ifstream fin("culori3.in");
    ofstream fout("culori3.out");
    long long n;
 
    fin>>n;
 
    if(n==1)
        cout<<5;
    else
    {
        if(n==2)
            cout<<8;
        else
        {
            if(n%2==0)
            {
                AtribValue(x,8);
                for(int i=(n/2-1);i>=1;i--)
                {
                    Mult(x,3);
                }
 
                for(int i=x[0];i>=1;i--)
                    fout<<x[i];
            }
 
 
 
            else
            {
                AtribValue(x,14);
                 for(int i=(n/2-1);i>=1;i--)
                {
                    Mult(x,3);
                }
                for(int i=x[0];i>=1;i--)
                    fout<<x[i];
            }
        }
    }
}
