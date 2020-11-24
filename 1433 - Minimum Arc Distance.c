#include<stdio.h>
//#include<conio.h>
//#include<string.h>
#include<math.h>
//#include<stdlib.h>
//#define pi acos(0.0)*2
int main()
{
    int i,j,t,ox,oy,ax,ay,bx,by,l;
    double x,y,z,a,b,c,r,angle,ab;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d%d%d",&ox,&oy,&ax,&ay,&bx,&by);
        r=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        //printf("%lf\n",r);
        ab=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
       // printf("%lf\n",ab);
        angle=acos(((r*r)+(r*r)-(ab*ab))/(2*r*r));
       // printf("%lf\n",angle);
        printf("Case %d: %lf\n",i,angle*r);
    }
    return 0;

}
