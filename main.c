#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade[5];
	
	grade[0]=10;
	grade[1]=10;
	grade[2]=10;
	grade[3]=10;
	grade[4]=10;
	
	int i;
	for(i=0;i<5;i++){
		printf("grade[%d]=%d\n",i,grade[i]);
	}
	return 0;
}
