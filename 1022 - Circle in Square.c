#include<stdio.h>
//#include<conio.h>
//#include<string.h>
#include<math.h>
//#include<stdlib.h>
#define PI 2*acos(0.0)
int main()
{
    int i,j,t;
    double n,s,k,m,q,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       scanf("%lf",&n);
       k=n+n;
       q=k*k;
       r=n*n;
       s=q-(r*PI);
       printf("Case %d: %.2lf\n",i,s);
    }
    return 0;

}

