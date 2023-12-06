#include<stdio.h>
int main(){
	FILE *filePointer;
	int current;
	char content[50];
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\BT03.txt","w");
	if(filePointer == NULL){
		printf("Khong the mo file de ghi:\n");
		return 1;
	}
	printf("Nhap vao so dong: ");
	scanf("%d",&current);
	for (int i = 0; i < current; i++) {
		printf("Nhap noi dung dong thu %d: ", i + 1);
		scanf(" %[^\n]", content);
		fprintf(filePointer, "%s\n", content);
	}
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\BT03.txt","r");
	if(filePointer == NULL){
		printf("Khong the mo file de ghi:\n");
		return 1;
	}
	fprintf(filePointer,"Noi dung file:\n");
	for (int i = 0; i < current; i++) {
		fgets(content, sizeof(content), filePointer);
		fprintf(filePointer,"Dong thu %d: %s\n", i + 1, content);
	}
	fclose(filePointer);
	return 0;
}
