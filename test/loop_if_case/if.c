#include <stdio.h>

int main(int argc,char **argv)
{
	int a=6;
	int i=2;
	scanf("%d %d",&a,&i);
	if (a==i) printf("%d\n",a);
	scanf("%d %d",&a,&i);
	if (a!=i) printf("%d\n",a);
	scanf("%d %d",&a,&i);
	if (a<i) {
		printf("%d\n",a);
	}
	else
	{
		printf("%d\n",i);
	}
	scanf("%d %d",&a,&i);
	if (a>i) {
		printf("%d\n",a);
	} else if (i==a) {
		printf("%d %d\n",a,i);
	} else {
		printf("%d\n",i);
	}
	return 0;
}
