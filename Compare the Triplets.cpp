#include <bits/stdc++.h>

using namespace std;
int main()
  { 
    int alice=0,bob=0,i,a[1000],b[10000];
    for(i=0;i<3;i++)
    {
        cin>>a[i];
        

    }
    for(i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<3;i++)
    {
        if(a[i]-b[i]>0 || a[i]-b[i]<0)
    {
    if(a[i]-b[i]>0)
    alice+=1;
    else  
    bob+=1;}
    }
    cout<<alice<<" ";
cout<<bob;
return 0;
  }


 

