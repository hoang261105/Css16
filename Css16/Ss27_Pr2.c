#include<stdio.h>
int main(){
	FILE *taptin = NULL;
	int kytuhientai = 0;
	taptin = fopen("C:\\Users\\Admin\\Desktop\\test1.txt","r");
	if(taptin != NULL){
		do{
			kytuhientai = fgetc(taptin);
			printf("%c",kytuhientai);
		} while(kytuhientai != EOF);
		fclose(taptin);
	}
	return 0;
}
