#include<stdio.h>
int main(){
	FILE *taptin = NULL;
	const int SO_KY_TU_TOI_DA = 1000;
	char arr[1000] = "";
	taptin = fopen("C:\\Users\\Admin\\Desktop\\test.txt","r");
	if(taptin != NULL){
		fgets(arr, SO_KY_TU_TOI_DA, taptin);
		printf("%s",arr);
		fclose(taptin);
	}
	return 0;
}
