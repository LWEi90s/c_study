#include<stdio.h>


int main()
{
	int N;
	double S=0;
	printf("������һ������\n");
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		S+=1.0/(2*i-1);
	}
	printf("%.6lf\n",S);
	
   return 0;
}
