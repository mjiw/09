#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade[SIZE];
	int sum=0;
	int average=0;
	int i;
	for(i=0;i<SIZE;i++){
		printf("학생 성적을 입력하세요:"); 
		scanf("%d",&grade[i]);
		sum+=grade[i];
	}
	
	average=sum/SIZE;
	printf("성적평균:%d",average);
	return 0;
}
