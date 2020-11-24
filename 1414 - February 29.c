#include<stdio.h>
//#include<conio.h>
#include<string.h>
//#include<math.h>
//#include<stdlib.h>
//#define pi acos(0.0)*2
int main()
{
    long long int i,j,y1,y2,d1,d2,s=0,l,t,m,n,x,y,z;
    char str[20],str2[20],c1,c2;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        l=0;
        s=0;
        scanf("%s %lld%c %lld",&str,&d1,&c1,&y1);
        scanf("%s %lld%c %lld",&str2,&d2,&c2,&y2);
        x=(y2/4)-((y1-1)/4);
        y=(y2/100)-((y1-1)/100);
        z=(y2/400)-((y1-1)/400);
        l=x-y+z;
            m=0;
            if(y1%4==0)
            {
                if(y1%100==0)
                {
                    if(y1%400==0) {m++;}
                }
                else {m++;}
            }
            if(m>0)
            {
               if(strcmp(str,"January")!=0 && strcmp(str,"February")!=0) s++;
            }
            m=0;
            if(y2%4==0)
            {
                if(y2%100==0)
                {
                    if(y2%400==0) {m++;}
                }
                else {m++;}
            }
            if(m>0)
            {
                if(strcmp(str2,"January")==0) s++;
                else if(strcmp(str2,"February")==0)
                {
                    if(d2<29) s++;
                }
            }
        n=l-s;
        if(n<0) printf("Case %lld: 0\n",i);
        else printf("Case %lld: %lld\n",i,n);
    }
    return 0;

}
