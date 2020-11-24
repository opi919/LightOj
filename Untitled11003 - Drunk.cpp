#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cstring>
#define X 1000000
using namespace std;
//
//bool arr[X+10],mp[X+10];
//  vector<int>prime;
//  int length;
//void sieve()
//{
//    int i,j;
//arr[0]=1;
//arr[1]=1;
//    for(i=2;i*i<=X;i++)
//    {
//        if(arr[i]==0)
//        {
//            prime.push_back(i);
//            for(j=i;i*j<=X;j++)
//            {
//                arr[i*j]=1;
//            }
//        }
//    }
//    for(;i<=X;i++)
//    {
//        if(arr[i]==0) {
//                prime.push_back(i);
//        }
//    }
//
//}
int main()
{
   // sieve();
   int i,k,j,l1,l2,n,m,t,count;
   string a,b;
   map<string,map<string,int> >arr;
   //map<string,int>brr;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>n;
       arr.clear();
       count=0;
       for(j=0;j<n;j++){
       cin>>a>>b;
     arr[a][b]=1;
     if(arr[b][a]==1) {count=0;}
     else count++;
       }
       if(n==count) printf("Case %d: Yes\n",i);
       else printf("Case %d: No\n",i);
   }
    return 0;
}
