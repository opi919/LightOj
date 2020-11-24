#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//#include<math.h>
//#include<stdlib.h>

int main()
{
    int i,k,j,n,t,s=0,a;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++)
    {
        scanf("\n%d",&n);
        for(j=0;j<n;j++){
            scanf(" %d",&a);
        if(a>0) s=s+a;
        }
        printf("Case %d: %d\n",i,s);
        s=0;
    }
    return 0;

}

