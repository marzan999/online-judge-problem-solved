#include<iostream>
//#include
using namespace std;
int main()
{
double a[12][12],sum=0.0;
int i,j,n;
cin>>n;
char ch;
cin>>ch;
for(i=0;i<12;i++){
for(j=1;j<12;j++){

cin>>a[i][j];
if(j==n){sum+=a[i][j];}
}
}
double av= sum/12.0;
if(ch=='S')
printf("%.1lf\n",sum);
else if(ch=='M') printf("%.1lf\n",av);
}


