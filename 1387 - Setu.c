#include<stdio.h>
//#include<conio.h>
#include<string.h>
//#include<math.h>
//#include<stdlib.h>
//#define pi acos(0.0)*2
int main()
{
    int i,j,n,k,s,l,t;
    char str[6];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        s=0;
        scanf("%d",&k);
        printf("Case %d:\n",i);
        for(j=0;j<k;j++)
        {
        scanf("%s",&str);
        if(strcmp(str,"donate")==0) {scanf("%d",&n);s+=n;}
        else if(strcmp(str,"report")==0) printf("%d\n",s);
        }
    }
    return 0;

}
