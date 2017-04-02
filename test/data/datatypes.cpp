#include <cstdio>

#define SPACE __asm__("nop");

struct simple{
	int a;
	char b;
};
	
int main(int argc,char **argv)
{
	//char
	SPACE
	char c1='a';	//Exactly one byte in size. At least 8 bits.
	SPACE
	char16_t c2='a';	//Not smaller than char. At least 16 bits.
	SPACE
	char32_t c3='a';	//Not smaller than char16_t. At least 32 bits.
	SPACE
	wchar_t	 c4='a';	//Can represent the largest supported character set.
	SPACE
	std::scanf("%c %c %c %c",&c1,&c2,&c3,&c4);
	SPACE
	std::printf("%c %c %c %c\n",c1,c2,c3,c4);
	SPACE
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
	//unsigned
	unsigned char us1=16;	//(same size as their signed counterparts)
	SPACE
	unsigned short int us2=16;
	SPACE
	unsigned int us3=16;
	SPACE
	unsigned long int us4=16;
	SPACE
	unsigned long long int us5=16;
	SPACE
	std::scanf("%d %d %d %d %d",&us1,&us2,&us3,&us4,&us5);
	SPACE
	std::printf("%d %d %d %d %d\n",us1,us2,us3,us4,us5);
	SPACE
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
	//Boolean type	
	bool bt=true;
	if (f==d) bt=false;
	SPACE
	bool bf=false;
	if (f==d) bf=true;
	SPACE
	SPACE
	SPACE
	//simple arrays
	int polje_int[]={0,1,2,3,4,5};
	SPACE
	std::scanf("%d %d %d %d %d",&polje_int[0],&polje_int[1],&polje_int[2],&polje_int[3],&polje_int[4],&polje_int[5]);
	SPACE
	std::printf("%d %d %d %d %d\n",polje_int[0],polje_int[1],polje_int[2],polje_int[3],polje_int[4],polje_int[5]);
	SPACE
	char polje_char[]="Test tekst.\n";
	SPACE
	std::scanf("%c %c %c %c %c",&polje_char[0],&polje_char[1],&polje_char[2],&polje_char[3],&polje_char[4],&polje_char[5]);
	SPACE
	std::printf("%c %c %c %c %c\n",polje_char[0],polje_char[1],polje_char[2],polje_char[3],polje_char[4],polje_char[5]);
	SPACE
	SPACE
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
