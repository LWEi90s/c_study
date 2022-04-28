#include<stdio.h>
#include<math.h>

int main()
{
	int N;
	double S=0;

	printf("请输入一个整数\n");
	scanf("%d",&N);
	for(int i=1,x=1;i<=N;i++,x+=3)
	{
		if(i%2!=0)
			S+=1.0/x;
		else
			S-=1.0/x;	
	
	}
	printf("%.3f\n",S);
	
   	return 0;
}
