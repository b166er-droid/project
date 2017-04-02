#include <stdio.h>

struct simple{
	int a;
	char b;
};
	
int main(int argc,char **argv)
{
	//char
	char c1='a';	//Exactly one byte in size. At least 8 bits.
	scanf("%c",&c1);
	printf("%c\n",c1);
	//signed
	signed char	 s1=16;	//Same size as char. At least 8 bits.
	signed short int s2=16;	//Not smaller than char. At least 16 bits.
	signed int s3=16;	//Not smaller than short. At least 16 bits.
	signed long int s4=16;	//Not smaller than int. At least 32 bits.
	signed long long int s5=16;	//Not smaller than long. At least 64 bits.
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	printf("%d %d %d %d %d\n",s1,s2,s3,s4,s5);
	//unsigned
	unsigned char us1=16;	//(same size as their signed counterparts)
	unsigned short int us2=16;
	unsigned int us3=16;
	unsigned long int us4=16;
	unsigned long long int us5=16;
	scanf("%d %d %d %d %d",&us1,&us2,&us3,&us4,&us5);
	printf("%d %d %d %d %d\n",us1,us2,us3,us4,us5);
	//Floating-point types	
	float	f=16.2;
	double	d=16.2;	//Precision not less than float
	long double	ld=16.2;	//Precision not less than double
	scanf("%f %f %f",&f,&d,&ld);
	printf("%f %f %f\n",f,d,ld);
	//simple arrays
	int polje_int[]={0,1,2,3,4,5};
	scanf("%d %d %d %d %d",&polje_int[0],&polje_int[1],&polje_int[2],&polje_int[3],&polje_int[4],&polje_int[5]);
	printf("%d %d %d %d %d\n",polje_int[0],polje_int[1],polje_int[2],polje_int[3],polje_int[4],polje_int[5]);
	char polje_char[]="Test tekst.\n";
	scanf("%c %c %c %c %c",&polje_char[0],&polje_char[1],&polje_char[2],&polje_char[3],&polje_char[4],&polje_char[5]);
	printf("%c %c %c %c %c\n",polje_char[0],polje_char[1],polje_char[2],polje_char[3],polje_char[4],polje_char[5]);
	//simple struct
	struct simple k;
	k.a=1;
	k.b='a';
	scanf("%d %f",&k.a,&k.b);
	printf("%d %f",k.a,k.b);
	//pointers
	int pp1=1;
	char pp2='a';
	struct simple pp3;
	pp3.a=1;
	pp3.b='a';
	int *p1=&pp1;
	scanf("%d",p1);
	printf("%d\n",*p1);
	char *p2=&pp2;
	scanf("%c",p2);
	printf("%c\n",p2);
	struct simple *p3=&pp3;
	scanf("%d %f",&(p3->a),&(p3->b));
	printf("%d %f\n",p3->a,p3->b);
	return 0;
}
