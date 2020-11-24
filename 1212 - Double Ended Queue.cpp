#include<iostream>
#include<bits/stdc++.h>
//#include<cstring>
//#include<stack>
#include<deque>
//#include<vector>
//#include<cmath>
//#define pi acos(-1)
using namespace std;
int main()
{
   int t,n,m,s,r,x,i,j,k,l;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>n>>m;
       deque<int>num;
      // deque<int>right;
       string str,str2;
       printf("Case %d:\n",i);
       l=0;
       for(j=0;j<m;j++)
       {
           cin>>str;
           if(str=="pushLeft")
           {
               cin>>x;
               if(l>=n)
               {
                    printf("The queue is full\n");
               }
               else
               {
                   num.push_front(x);
                   l++;
                printf("Pushed in left: %d\n",x);
               }
           }
           else if(str=="pushRight")
           {
               cin>>x;
               if(l>=n) printf("The queue is full\n");
               else
               {
                   num.push_back(x);
                   l++;
                printf("Pushed in right: %d\n",x);
               }
           }
           else if(str=="popRight")
           {
               if(!num.empty())
               {
                   printf("Popped from right: %d\n",num.back());
                   l--;
                   num.pop_back();
               }
               else printf("The queue is empty\n");
           }
           else if(str=="popLeft")
           {
              if(!num.empty())
                {
                   printf("Popped from left: %d\n",num.front());
                        num.pop_front();
                        l--;
                }
                else printf("The queue is empty\n");
           }
       }
   }
    return 0;
}
