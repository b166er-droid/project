#include <cstdio>

#define SPACE __asm__("nop");

int main(int argc,char **argv)
{
	//signed
	signed char	 s1=16;	//Same size as char. At least 8 bits.
	SPACE
	signed short int s2=16;	//Not smaller than char. At least 16 bits.
	SPACE
	signed int s3=16;	//Not smaller than short. At least 16 bits.
	SPACE
	signed long int s4=16;	//Not smaller than int. At least 32 bits.
	SPACE
	signed long long int s5=16;	//Not smaller than long. At least 64 bits.
	SPACE
	std::scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	SPACE
	std::printf("%d %d %d %d %d\n",s1,s2,s3,s4,s5);
	SPACE
	return 0;
}
