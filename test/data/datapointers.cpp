#include <cstdio>

#define SPACE __asm__("nop");

struct simple{
	int a;
	char b;
};
	
int main(int argc,char **argv)
{
	//pointers
	int pp1=1;
	char pp2='a';
	simple pp3;
	pp3.a=1;
	pp3.b='a';
	int *p1=&pp1;
	std::scanf("%d",p1);
	std::printf("%d\n",*p1);
	SPACE
	char *p2=&pp2;
	std::scanf("%c",p2);
	std::printf("%c\n",p2);
	SPACE
	simple *p3=&pp3;
	std::scanf("%d %f",&(p3->a),&(p3->b));
	std::printf("%d %f\n",p3->a,p3->b);
	SPACE
	return 0;
}
