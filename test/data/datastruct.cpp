#include <cstdio>

#define SPACE __asm__("nop");
	
struct simple{
	int a;
	char b;
};

int main(int argc,char **argv)
{
	//simple struct
	simple k;
	SPACE
	k.a=1;
	SPACE
	k.b='a';
	SPACE
	std::scanf("%d %f",&k.a,&k.b);
	SPACE
	std::printf("%d %f",k.a,k.b);
	SPACE
	return 0;
}
