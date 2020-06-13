#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
   // while((cin>>a>>b!=EOF)
            while(scanf("%d%d", &a, &b)!=EOF)
    {
        if(a==b)
            cout<<a<<endl;
        else if(a>b)
            cout<<a<<endl;
        else if(a<b)
            cout<<b<<endl;
    }
    return 0;
}
