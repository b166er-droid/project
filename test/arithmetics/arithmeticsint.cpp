#include <cstdio>

#define SPACE __asm__("nop");

int main(int argc,char **argv)
{
	int a,b;
	std::scanf("%d %d",&a,&b);
	a=(a+b)*b/a;
	b=(a+a+a+a*b)*6;
	std::printf("%d %d\n",a,b);
	SPACE
	a=a+1;
	a=a*3;
	a=a-4;
	a=a/5;
	a=a%6;
	a=a*a;
	a=a*a;
	SPACE
	std::printf("%d\n",a);
	return 0;
}
