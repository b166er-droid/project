#include <stdio.h>

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
	scanf("%d %d",&i,&j);
	k=pass_by_value(i);
	l=pass_by_value(j);
	printf("%d %d %d %d\n",i,j,k,l);
	return 0;
}
