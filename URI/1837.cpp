#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin>>a>>b;

    x=a/b;
    y=a%b;
    if(y<0)
    {
        if(x<0)
            x--;
        if(x>0)
            x++;

        y=a-(b*x);
    }
    cout<<x<<endl<<y;
    return 0;
}
