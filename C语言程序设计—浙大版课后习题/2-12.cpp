#include<stdio.h>


int main()
{
	int lower,upper;
	printf("请输入两个正整数lower和upper,且（lower≤upper≤100）\n");
	scanf("%d %d",&lower,&upper);
	if(lower<=upper&&upper<=100){
		printf("fahr celsius\n");
		printf("%d %.1f\n",lower,0.0);
		printf("%d %.1f\n",upper-1,5.0*(upper-1-32)/9);
	}
	else if(lower>upper||lower>100){
		printf("Invalid");
	}
	
   return 0;
}
