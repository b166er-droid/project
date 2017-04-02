#include <cstdio>

#define SPACE __asm__("nop");

struct simple{
	int a;
	char b;
};
	
int main(int argc,char **argv)
{
	//Boolean type	
	int f,d;
	std::scanf("%d %d",f,d);
	SPACE
	bool bt=true;
	SPACE
	if (f==d) bt=false;
	SPACE
	bool bf=false;
	SPACE
	if (f==d) bf=true;
	SPACE
	SPACE
	SPACE
	return 0;
}
