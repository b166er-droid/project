#include <stdio.h>

int main(int argc,char **argv)
{
	int a,b;
	scanf("%d %d",&a,&b);
	a=(a+b)*b/a;
	b=(a+a+a+a*b)*6;
	printf("%d %d\n",a,b);
	a=a+1;
	a=a*3;
	a=a-4;
	a=a/5;
	a=a%6;
	a=a*a;
	a=a*a;
	printf("%d\n",a);
	return 0;
}
