#include <cstdio>

#define SPACE __asm__("nop");

int main(int argc,char **argv)
{
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
	return 0;
}
