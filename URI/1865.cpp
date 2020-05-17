#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, c;
    char a[1000];
    cin>>n;
    for(b=1; b<=n; b++)
    {
        cin>> a;
        cin>>c;
        if(a[0]=='T' && a[1]=='h' && a[2]=='o' && a[3]=='r')
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
