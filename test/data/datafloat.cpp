#include <cstdio>

#define SPACE __asm__("nop");
	
int main(int argc,char **argv)
{
	//Floating-point types	
	float	f=16.2;
	SPACE
	double	d=16.2;	//Precision not less than float
	SPACE
	long double	ld=16.2;	//Precision not less than double
	SPACE
	std::scanf("%f %f %f",&f,&d,&ld);
	SPACE
	std::printf("%f %f %f\n",f,d,ld);
	SPACE
	return 0;
}
