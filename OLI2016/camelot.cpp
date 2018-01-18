//init

#include<fstream>
#include<queue>

using namespace std;

ifstream fin("camelot.in");
ofstream fout("camelot.out");

#define inf 99999
#define Size 1005

int board[Size][Size];
int cav[Size][2];

 int di[] = {-2, -2, -1, 1, -1, 1, 2, 2};
 int dj[] = {-1, 1, -2, -2, 2, 2, -1, 1};

int Min=inf, Max=0;
queue < pair < int , int > > q;
int p,k,xc,yc,m,n;

void read()
{
    fin>>p;
    fin>>m>>n;
    fin>>k;
    fin>>xc>>yc;
    for(int i=1;i<=k;i++)
    {
        fin>>cav[0][i]>>cav[1][i];
    }
}

bool OK(int x, int y)
{
    if(x>0 && y>0 && x<=m && y<=n)
        return true;
    return false;
}
void Lee()
{
    int newx, newy;
    board[xc][yc]=1;
    q.push(make_pair(xc,yc));
    while(!q.empty())
    {
        xc=q.front().first;
        yc=q.front().second;
        q.pop();
        for(int dir=0; dir<8;dir++)
        {
            newx=xc+di[dir];
            newy=yc+dj[dir];
            if(OK(newx,newy)&&board[newx][newy]==0)
            {
                board[newx][newy]=board[xc][yc]+1;
                q.push(make_pair(newx,newy));
            }
        }
    }
}

void MaxMin()
{
    if(p==1)
    {
        for(int i=1;i<=k;i++)
        if(board[cav[0][i]][cav[1][i]]<Min)
            Min=board[cav[0][i]][cav[1][i]];
            fout<<Min-1;
    }
     if(p==2)
    {
        for(int i=1;i<=k;i++)
        if(board[cav[0][i]][cav[1][i]]>Max)
            Max=board[cav[0][i]][cav[1][i]];
            fout<<Max-1;
    }
}
int main()
{
    read();
    Lee();
    MaxMin();

}

