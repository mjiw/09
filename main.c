#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade[SIZE];
	printf("5���� ������ �Է��ϼ���\n");
	
	int i;
	for(i=0;i<SIZE;i++){
		scanf("%d",&grade[i]);
	}
	
	for(i=0;i<5;i++){
		printf("grade[%d]=%d\n",i,grade[i]);
	}
	
	return 0;
}
