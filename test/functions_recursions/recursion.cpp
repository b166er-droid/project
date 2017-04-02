#include <cstdio>

#define SPACE __asm__("nop");

int rek_fib(int a){
	if ((a==0)||(a==1)) return 1;
	else return rek_fib(a-1)+rek_fib(a-2); 
}

int main(int argc,char **argv)
{
	int i;
	SPACE
	std::scanf("%d",i);
	SPACE
	int a,b,c;
	SPACE
	a=rek_fib(i);
	SPACE
	b=rek_fib(i+2);
	SPACE
	c=rek_fib(i+4);
	SPACE
	std::printf("%d %d %d\n",a,b,c);
	SPACE
	return 0;
}
