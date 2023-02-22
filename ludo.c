#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
int num,num1,num2,num3,i,sum1=0,sum2=0,sum3=0,sum4=0;
int count=0,count2=0,count3=0,count4=0;
char str1[100],str2[100];
srand(time(NULL));
printf("Lets Play... Ludo!!\n");
for(i=0;i<=10000;i++)
{
printf("Play User 1\n");
gets(str1);
if(str1[0]=='r'&& str1[1]=='o'&& str1[2]=='l'&& str1[3]=='l')
	{
	num=rand()%6+1;
	printf("		Dice Came : %d\n",num);
		if(num==6)
			count=1;
		else
		  	count2=0;
	}
printf("\n");
printf("	User 1 Points : %d\n",count);
if(count==1&&num==6)
	{
	printf("User 1 Coin Is Out\n");
	sum1=0;
	printf("			At Start Point : %d\n",sum1);
	}
if(count==1)
{
int num4=rand()%6+1;
printf("Dice Came %d\n",num4);
if(num4==5||num4==4||num4==3||num4==2||num4==1||num4==6)
	{
	sum3=sum3+num4;
	printf("				Coin Is Now At : %d\n",sum3);
		if(sum3==52)
			{
			printf("User 1 Won!!\n");
			exit(0);
			}
		if(sum3>52)
			{
			sum3=sum3-num4;
			printf("Wait For Another Chance....Coin Is Now At %d\n",sum3);
			}
	}	
}
printf("Play User 2\n");
gets(str2);
if(str2[0]=='r'&& str2[1]=='o'&& str2[2]=='l'&& str2[3]=='l')
	{
	num1=rand()%6+1;
	printf("		Dice Came : %d\n",num1);
		if(num1==6)
			count3=1;
		else
		  	count4=0;
	}
printf("\n");
printf("	User 2 Points : %d\n",count3);
if(count3==1&&num1==6)
	{
	printf("User 2 Coin Is Out\n");
	sum2=0;
	printf("			At Start Point : %d\n",sum2);
	}
if(count3==1)
{
int num5=rand()%6+1;
printf("Dice Came %d\n",num5);
if(num5==5||num5==4||num5==3||num5==2||num5==1||num5==6)
	{
	sum4=sum4+num5;
	printf("				Coin Is Now At : %d\n",sum4);
		if(sum4==52)
			{
			printf("User 2 Won!!\n");
			exit(0);
			}
		if(sum4>52)
			{
			sum4=sum4-num5;
			printf("Wait For Another Chance....Coin Is Now At : %d\n",sum4);
			
			}
	}
}
}
return 0;
}
			
