#include <stdio.h>

int main(int argc,char **argv)
{
	int a=6;
	int i=2;
	scanf("%d %d",&a,&i);
	switch (a){
		case 0: {
			printf("%d\n",a);
			break;
		}
		case 1: {
			printf("%d\n",i);
			break;
		}
		case 2: {
			printf("%d\n",a+i);
			break;
		}
		default: {
			printf("default\n");
			break;
		}
	}
	return 0;
}
