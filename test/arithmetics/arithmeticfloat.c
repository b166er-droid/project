#include <stdio.h>

int main(int argc,char **argv)
{
	float a,b;
	scanf("%f %f",&a,&b);
	a=(a+b)*b/a;
	b=(a+a+a+a*b)*6;
	printf("%f %f\n",a,b);
	a=a+1;
	a=a*3;
	a=a-4;
	a=a/5;
	a=a*a;
	a=a*a;
	printf("%f\n",a);
	return 0;
}
