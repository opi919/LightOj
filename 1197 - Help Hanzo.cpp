#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cstring>
#define X 1000000
using namespace std;

bool arr[X+10],mp[X+10];
  vector<int>prime;
  int length;
void sieve()
{
    int i,j;
arr[0]=1;
arr[1]=1;
    for(i=2;i*i<=X;i++)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
            for(j=i;i*j<=X;j++)
            {
                arr[i*j]=1;
            }
        }
    }
    for(;i<=X;i++)
    {
        if(arr[i]==0) {
                prime.push_back(i);
        }
    }

}
int segmentsieve(int low,int high)
{
    int i,counter=0;
    long long j;
     if(low==1) {
            low++;
     }
     if(low>high)
    {
        return counter;
    }
     memset(mp,0,sizeof mp);

      for(i=0;i<length&&prime[i]<=high;i++)
      {
          j=(low/prime[i])*prime[i];
          //cout<<low<<endl;
        if(j<low) {
                j+=prime[i];
        }
         //cout<<low+prime[j]<<endl;
//cout<<low<<endl;
if( j<X&& arr[j]==0){
   j+=prime[i];
}
         //cout<<low<<endl;
          for(;j<=high;j+=prime[i])
          {
               if(j<low)
            {
                break;
            }
              mp[j-low]=1;
          }
      }
      for(i=low;i<=high;i++)
      {
          if(i<low) {
                break;
          }
          if(mp[i-low]==0) {
                counter++;
          }
      }
      return counter;
}
int main()
{
    sieve();
    length=prime.size();
     //cout<<length<<endl;
  int i,j,low,high,t;
 cin>>t;
  for(i=1;i<=t;i++)
  {
      cin>>low>>high;
      printf("Case %d: %d\n",i,segmentsieve(low,high));
  }
    return 0;
}
