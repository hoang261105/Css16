#include<stdio.h>
int main(){
	FILE *taptin = NULL;
	char arr[100];
	taptin = fopen("C:\\Users\\Admin\\Desktop\\BT01.txt","w");
	if(taptin != NULL){
		printf("Nhap chuoi: ");
		getchar();
		scanf("%s",arr);
	}
	fprintf(taptin, "Noi dung van ban la: \n%s\n",arr);
	fclose(taptin);
    return 0;
}
