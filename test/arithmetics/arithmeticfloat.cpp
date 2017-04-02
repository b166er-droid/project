#include <cstdio>

#define SPACE __asm__("nop");

int main(int argc,char **argv)
{
	float a,b;
	std::scanf("%f %f",&a,&b);
	a=(a+b)*b/a;
	b=(a+a+a+a*b)*6;
	std::printf("%f %f\n",a,b);
	SPACE
	a=a+1;
	a=a*3;
	a=a-4;
	a=a/5;
	a=a*a;
	a=a*a;
	SPACE
	std::printf("%f\n",a);
	return 0;
}
