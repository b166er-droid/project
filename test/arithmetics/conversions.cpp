#include <cstdio>

#define SPACE __asm__("nop");

int main(int argc,char **argv)
{
	float a,b;
	int c,d;
	std::scanf("%f %f",&a,&b);
	c=(a+b)*b/a;
	d=(a+a+a+a*b)*6;
	a=(a+b)*c/d;
	b=(a+c+d+a*b)*6;
	std::printf("%f %f\n",a,b);
	std::printf("%d %d\n",c,d);
	return 0;
}
