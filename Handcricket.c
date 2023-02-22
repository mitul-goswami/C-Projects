#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int a1;
int a2;
int i,j,k;
int t,n;
char ch;
int sum=0;
srand(time(NULL));
while(a1!=a2)
	{
	printf("Enter Runs\n");
    	scanf("%d",&a1);
    	sum=sum+a1;
	if(a1<=6)
		{
		printf("The Player Entered %d\n",a1);
		a2=rand()%6+1;
		printf("Computer Gave %d\n",a2);
			if(a1!=a2)
			{
			printf("            %d Runs!!\n",a1);
			}
			else if (a1==a2)
			{
			printf("OUT!!\n");
			printf("Total Runs %d",sum);
			exit(0);
			}
		}
	
	else 
			
		exit(0);
		
	}
	
//scanf("%c",&ch);
return 0;
}
