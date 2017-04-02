#include <stdio.h>

int rek_fib(int a){
	if ((a==0)||(a==1)) return 1;
	else return rek_fib(a-1)+rek_fib(a-2); 
}

int main(int argc,char **argv)
{
	int i;
	scanf("%d",i);
	int a,b,c;
	a=rek_fib(i);
	b=rek_fib(i+2);
	c=rek_fib(i+4);
	printf("%d %d %d\n",a,b,c);
	return 0;
}
