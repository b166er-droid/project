#include <cstdio>

#define SPACE __asm__("nop");

int main(int argc,char **argv)
{
	int a=6;
	int i=2;
	SPACE
	std::scanf("%d %d",&a,&i);
	SPACE
	if (a==i) std::printf("%d\n",a);
	SPACE
	std::scanf("%d %d",&a,&i);
	SPACE
	if (a!=i) std::printf("%d\n",a);
	SPACE
	std::scanf("%d %d",&a,&i);
	SPACE
	if (a<i) {
		std::printf("%d\n",a);
	}
	else
	{
		std::printf("%d\n",i);
	}
	SPACE
	std::scanf("%d %d",&a,&i);
	SPACE
	if (a>i) {
		std::printf("%d\n",a);
	} else if (i==a) {
		std::printf("%d %d\n",a,i);
	} else {
		std::printf("%d\n",i);
	}
	SPACE
	return 0;
}
