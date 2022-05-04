/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{   int n;
    cout<<"enter value of n";
    cin>>n;
    int at[5],bt[5],ct[5],tat[5],wt[5];
  int  f[5]={0};
//   at[0]=0;
//   at[1]=5;
//   at[2]=12;
//   at[3]=2;
//   at[4]=9;
//   bt[0]=11;
//   bt[1]=28;
//      bt[2]=2;
//      bt[3]=10;
//      bt[4]=16;
    
  for(int i=0;i<n;i++){
      cout<<"enter arrival time for process  "<<i<<"   ";
      cin>>at[i];
    //   cout<<endl;
      cout<<"enter burst time for process  "<<i<<"    ";
      cin>>bt[i];
  }
    int t=*min_element(at,at+n);
   for(int i=0;i<n;i++){
       
       int sel=-1;
       int m=1000;
       for(int j=0;j<n;j++){
           if(m>bt[j] && f[j]!=-1 && at[j]<=t){
               m=bt[j];
               sel=j;
               
           }
       }
    //   if(at[sel]!=0)
       
       cout<<m<<endl;
       f[sel]=-1;
       t=t+bt[sel];
       ct[sel]=t;
       tat[sel]=ct[sel]-at[sel];
       wt[sel]=tat[sel]-bt[sel];
   }
   
  for(int i=0;i<n;i++){
      cout<<ct[i]<<"  "<<tat[i]<<"   "<<wt[i]<<endl;
  }
   
    return 0;
}
