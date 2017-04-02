#include <cstdio>

#define SPACE __asm__("nop");

int main(int argc,char **argv)
{
	int a=6;
	int i=2;
	SPACE
	std::scanf("%d %d",&a,&i);
	SPACE
	switch (a){
		case 0: {
			std::printf("%d\n",a);
			break;
		}
		case 1: {
			std::printf("%d\n",i);
			break;
		}
		case 2: {
			std::printf("%d\n",a+i);
			break;
		}
		default: {
			std::printf("default\n");
			break;
		}
	}
	SPACE
	return 0;
}
