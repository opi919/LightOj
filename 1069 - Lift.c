#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//#include<math.h>
//#include<stdlib.h>
int main()
{
    int i,j,k,l,m,t,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&m);
        if(n<=m){
        k=m*4;
        j=k+19;
        printf("Case %d: %d\n",i,j);
        }
        else
        {
           k=n-m;
           j=k+n;
           l=(j*4)+19;
           printf("Case %d: %d\n",i,l);
        }
    }
    return 0;

}

