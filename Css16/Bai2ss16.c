#include<stdio.h>

int main(){
	FILE *filePointer;
	char buffer[100];
	// Su dung fopen de mo file co huong dan voi che do r
    filePointer = fopen("C:\\Users\\Admin\\Desktop\\BT01.txt","r");
    //Doc va hien thi du lieu cho nguoi dung
    fread(buffer,sizeof(char), sizeof(buffer),filePointer);
    // Hien thi noi dung co tring file
    printf("Noi dung van ban la: \n%s\n",buffer);
    fclose(filePointer);
    return 0;
}
