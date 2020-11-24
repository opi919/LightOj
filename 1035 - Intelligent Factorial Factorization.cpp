#include<iostream>
#include<bits/stdc++.h>
//#include<cstring>
//#include<stack>
//#include<deque>
//#include<vector>
//#include<cmath>
//#define pi acos(-1)
using namespace std;
int main()
{
    int i,j,k=0,l,n,m,t,s,max=0,q;
    int a[100],b[100];
   // a[100]= {0};
    for(i=2;i<100;i++){
            a[i]=0;
        //printf("%d\n",a[i]);
    }
    for(i=2; i<100; i++)
    {
        if(a[i]==0)
        {
            for(j=i*2; j<100; j+=i)
            {
                a[j]=1;
            }
            b[k++]=i;
        }
    }
  //  for(i=0;i<k;i++)
    //    printf("%d\n",b[i]);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        if(n==2) {
            printf("Case %d: 2 = 2 (1)\n",i);
        }
        else {
        int c[100]= {0};
    max=0;
        c[2]=1;
        l=0;
        //s=0;
        for(j=3; j<=n; j++)
        {
            l=0;
            s=j;
            while(1)
            {
                if(s%b[l]==0)
                {
                    s=s/b[l];
                    c[b[l]]++;
                }
                else
                    l++;
                if(s==1)
                    break;
                if(l==k)
                    break;
            }
            if(b[l]>max) max=b[l];
        }
  // for(j=0;j<=max;j++)
    //  printf("%d\n",c[j]);
        //max=b[l-1];
       // printf("max=%d\n",max);
        q=0;
        printf("Case %d: ",i);
    for(j=0; j<=max; j++)
        {
            if(q==0)
            {
                if(j==max)
                {
                    printf("%d = %d (%d)\n",n,j,c[j]);
                    q=1;

                }
                else if(c[j]!=0)
                {
                    printf("%d = %d (%d) * ",n,j,c[j]);
                    q=1;
                }
            }
            else if(j==max)  {printf("%d (%d)\n",j,c[j]);}
            else if(c[j]!=0)
                printf("%d (%d) * ",j,c[j]);
            }
        }
    }
    return 0;
}
