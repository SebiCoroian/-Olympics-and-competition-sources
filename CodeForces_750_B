#include<iostream>
using namespace std;



int main()
{
    string dir;
    int n, lat=0,x;
    bool valid = 1;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>x;
        cin>>dir;


        switch(dir[0])
        {
        case 'N':
            lat -= x;
            break;
        case 'S':
            lat += x;
            break;
        default:
            if(lat == 0 || lat == 20000)
                lat = -1;
            break;
        }

    }
    if(lat < 0 || lat > 20000)
        valid = 0;

    if(valid==1 && lat==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
