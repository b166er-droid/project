#include <cstdio>

#define SPACE __asm__("nop");

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
	return 0;
}
