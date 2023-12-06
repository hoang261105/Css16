#include<stdio.h>
int main(){
	FILE *filePointer;
	struct Stduent sv[100];
	int current;
	char content[50];
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\BT03.txt","w");
	if(filePointer == NULL){
		printf("Khong the mo file de ghi:\n");
		return 1;
	}
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\BT03.txt","r");
	if(filePointer == NULL){
		printf("Khong the mo file de ghi:\n");
		return 1;
	}
	int lineCount = 1; 
	char ch;
	while ((ch = fgetc(filePointer)) != EOF) {
		if (ch == '\n') {
			lineCount++;
		}
	}
	fclose(filePointer);
	printf("So dong trong file: %d\n", lineCount+1);
	return 0;
}
