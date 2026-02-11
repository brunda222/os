#include<stdio.h>
int main()
{
  int p[10],bt[10],wt[10],tat[10],twt,ttat,n,i,j,temp,pri[5];
  float awt,atat;
  printf("\nEnter number of process ready to execute");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\nEnter the process number");
    scanf("%d",&p[i]);
    printf("\nEnter the burst time");
    scanf("%d",&bt[i]);
    printf("\nEnter the priority");
    scanf("%d",&pri[i]);
 }
 for(i=0;i<n;i++)
 {
   for(j+i-1;j<i;j++)
   {
     if(pri[i]<pri[j])
     {
      temp =pri[i];
      pri[i]=pri[j];
      pri[j]=temp;
      temp=p[i];
      p[i]=p[j];
      p[j]=temp;
      temp=bt[i];
      bt[i]=bt[j];
      bt[j]=temp;
      }
    }
  }
   wt[0]=0;
  twt=0;
  tat[0]=bt[0];
  ttat=bt[0];
  for(i=1;i<n;i++)
  {
    wt[i]=wt[i-1]+bt[i-1];
    tat[i]=wt[i]+bt[i];
    twt=twt+wt[i];
    ttat=ttat+tat[i];
  }
   awt=(float) twt/n;
  atat=(float) ttat/n;
  printf("\n priority, Process no,Burst time , Waiting time , Turn Around time");
  for(i=0;i<n;i++)
  {
    printf("\n %d\t %d\t %d\t %d\t %d\t",pri[i],p[i],bt[i],wt[i],tat[i]);
  }
  printf("\nAverage Waiting Time =%f",awt);
  printf("\nAverage Turn Around Time=%f",atat);
 }

