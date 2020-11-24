#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//#include<math.h>
//#include<stdlib.h>
//#define pi acos(0.0)*2
int main()
{
    int i,l,j,k,t,n,m,x1,x2,y1,y2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&m);
        int x[m],y[m];
        for(j=0;j<m;j++)
        {
            scanf("%d%d",&x[j],&y[j]);
        }
        printf("Case %d:\n",i);
        for(j=0;j<m;j++)
        {
            if(x[j]>=x1 && x[j]<=x2)
            {
                if(y[j]>=y1 && y[j]<=y2) printf("Yes\n");
                else printf("No\n");
            }
            else printf("No\n");
        }
    }
    return 0;

}
