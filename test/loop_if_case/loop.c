#include <stdio.h>

int main(int argc,char **argv)
{
	int a=6;
	int i=0;
	scanf("%d",&a);
	for (i=0;i<6;i++){
		a+=a;
	}
	i=0;
	while(i<6){
		a+=a;
	}
	i=0;
	do{
		a+=a;
	}while(i<6);
	printf("%d\n",a);
	return 0;
}
