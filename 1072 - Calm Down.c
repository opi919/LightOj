#include<stdio.h>
//#include<conio.h>
//#include<string.h>
#include<math.h>
//#include<stdlib.h>
#define pi acos(0.0)*2
int main()
{
    int i,j,t;
    double x,y,z,a,b,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf%lf",&x,&n);
        y=pi/n;
        z=x*sin(y);
        a=z/(1+sin(y));
        j=(int)a;
        b=(a*1.0)/j;
        if(b!=1)
        printf("Case %d: %.10lf\n",i+1,a);
        else printf("Case %d: %.0lf\n",i+1,a);
    }
    return 0;

}
