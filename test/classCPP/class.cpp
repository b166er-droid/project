#include <cstdio>

#define SPACE __asm__("nop");

class Car{
	public:
		Car(){
			running=0;
		}
		void command(int a){
			if (a==1 && running==0) start();
			else if (a==0 && running==1) stop();
			return;
		}
		void state(void){
			if (running==1) {
				std::printf("Running!\n");
			}
			else {
				std::printf("Waiting!\n");
			}
		}
	private:
		int running;
		void start(void){
			running=1;
		}
		void stop(void){
			running=0;
		}

};

int main(int argc,char **argv)
{
	Car a;
	int b;
	std::scanf("%d",&b);
	a.command(b);
	a.state();
	std::scanf("%d",&b);
	a.command(b);
	a.state();
	std::scanf("%d",&b);
	a.command(b);
	a.state();
	return 0;
}
