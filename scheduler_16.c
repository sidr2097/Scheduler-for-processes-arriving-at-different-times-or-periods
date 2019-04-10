
//	THIS IS A PROGRAM TO SCHEDULE PROCESSES BASED ON THE ARRIVAL TIME ie First Come First Serve basis

#include<stdio.h>

int main()
{
	int n,i,bt[10],at[10],t=3,wt[10],k[10];
	
	//taking number of processes
	printf("Enter the number of processes : ");
	scanf("%d",&n);
	
	
	
	///taking arrival time at[] and burst time bt[] form user
	for(i=0;i<n;i++)
	{
		printf("\nEnter the arrival time of P[%d] : ",i+1);
		scanf("%d",&at[i]);
		
		printf("Enter the burst time of P[%d] : ",i+1);
		scanf("%d",&bt[i]);
	}
	
	// k is total time till which the previous processes have run
	k[0]=0;
	for(i=0;i<n;i++)
	{
		wt[0]=0;		//initialising wait time for first process as zero
		k[i+1]=k[i]+bt[i];
		wt[i+1]=k[i+1]-at[i+1];
		if(wt[i+1]<0)
		{
			wt[i+1]=0;
		}
	}
	
	
	
	printf("\nProcess \t\tArrival time \t\tBurst time \t\tWaiting time");
	for(i=0;i<n;i++)
	{
		printf("\nP[%d] \t\t\t%d \t\t\t%d \t\t\t%d",i+1,at[i],bt[i],wt[i]);
	}
}
