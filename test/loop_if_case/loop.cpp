#include <cstdio>

#define SPACE __asm__("nop");

int main(int argc,char **argv)
{
	int a=6;
	int i=0;
	SPACE
	std::scanf("%d",&a);
	SPACE
	for (i=0;i<6;i++){
		a+=a;
	}
	SPACE
	i=0;
	SPACE
	while(i<6){
		a+=a;
	}
	SPACE
	i=0;
	SPACE
	do{
		a+=a;
	}while(i<6);
	SPACE
	std::printf("%d\n",&a);
	SPACE
	return 0;
}
