#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,n,a=0,b=0,c=0,d=0,s[100000],z=0,e=0,f=0,g=0;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>s[i];
       if(s[i]==1)
        a++;
       if(s[i]==2)
        b+=s[i];
       if(s[i]==3)
        c++;
       if(s[i]==4)
       d++;
   }
   z+=d;
   if(c==a)
   {
       z+=c;
   }
   if(c>a)
   {
       z+=c;
   }
   if(c<a)
   {
       e=a-c;
       z+=c;
       b+=e;
   }
   if(b%4==0)
   {
       f=b/4;
       z+=f;
   }
   if(b%4!=0)
   {
        g=(b/4)+1;
       z+=g;
   }
   cout<<z;


}
