#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("������һ���Ǹ�����n\n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		int j=pow(3,i);
		printf("pow(3,%d) = %d\n",i,j);
	}
	return 0;
}
