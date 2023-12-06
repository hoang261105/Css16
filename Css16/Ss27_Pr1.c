#include<stdio.h>
int main(){
	FILE *taptin = NULL;
	int age = 0;
	taptin = fopen("C:\\Users\\Admin\\Desktop\\test.txt","w");
	if(taptin != NULL){
		printf("Ban bao nhieu tuoi: ");
		scanf("%d",&age);
		fprintf(taptin,"Nguoi dang su dung chiec may tinh nay %d tuoi",age);
		fclose(taptin);
	}
	return 0;
}
