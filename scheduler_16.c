#include<stdio.h>

int main()
{
	int n,i,bt[10],at[10],t=3,wt[10],k[10];
	printf("Enter the number of processes : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the arrival time of P[%d] : ",i+1);
		scanf("%d",&at[i]);
		
		printf("Enter the burst time of P[%d] : ",i+1);
		scanf("%d",&bt[i]);
	}
	
	k[0]=0;
	for(i=0;i<n;i++)
	{
		wt[i]=0;
		k[i+1]=k[i]+bt[i];
		wt[i+1]=k[i+1]-at[i+1];
	}
	
	
	
	printf("\nProcess \t\tArrival time \t\tBurst time \t\tWaiting time");
	for(i=0;i<n;i++)
	{
		printf("\nP[%d] \t\t\t%d \t\t\t%d \t\t\t%d",i+1,at[i],bt[i],wt[i]);
	}
}
