#include <cstdio>

#define SPACE __asm__("nop");

int pass_by_value(int a){
	a=a+10;
	return a; 
}
int pass_by_reference(int *a){
	*a=*a+10;
	return *a; 
}

int main(int argc,char **argv)
{
	int i,j,k,l;
	SPACE
	std::scanf("%d %d",&i,&j);
	SPACE
	k=pass_by_value(i);
	SPACE
	l=pass_by_value(j);
	SPACE
	std::printf("%d %d %d %d\n",i,j,k,l);
	SPACE
	return 0;
}
