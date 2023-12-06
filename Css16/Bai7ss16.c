#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct BookInfo{
	char tensach[50];
    int masach;
    char tacgia[50];
    int giatien;
    char theloai[20];
};
void bookInfo(struct BookInfo *book, int *n){
    printf("Nhap thong tin sach:\n");
    for (int i = 0; i < *n; i++){
        printf("Nhap ten sach: ");
        scanf("\n");
        gets(book[i].tensach);
        printf("Nhap ma sach: ");
        scanf("%d", &book[i].masach);
        printf("Nhap tac gia: ");
        scanf("%s", book[i].tacgia);
        printf("Nhap gia tien: ");
        scanf("%d", &book[i].giatien);
        printf("Nhap the loai: ");
        scanf("\n");
        gets(book[i].theloai);
    }
}
void saveToFile(struct BookInfo *book, int n, const char *filename) {
    FILE *f = fopen(filename, "w");
    if (f != NULL) {
        fprintf(f, "Thong tin sach:\n");
        for (int i = 0; i < n; i++) {
            fprintf(f, "Ten sach: %s\n", book[i].tensach);
            fprintf(f, "Ma sach: %d\n", book[i].masach);
            fprintf(f, "Tac gia: %s\n", book[i].tacgia);
            fprintf(f, "Gia tien: %d\n", book[i].giatien);
            fprintf(f, "The loai: %s\n", book[i].theloai);
        }
        fclose(f);
        printf("Luu thong tin sach vao file thanh cong.\n");
    } else {
        printf("Khong the mo file de luu thong tin sach.\n");
    }
}
void displayFromFile(const char *filename) {
    FILE *f = fopen(filename, "r");
    if (f != NULL) {
        char line[100];
        while (fgets(line, sizeof(line), f) != NULL) {
            printf("%s", line);
        }
        fclose(f);
    } else {
        printf("Khong the mo file de hien thi thong tin sach.\n");
    }
}
int main(){
	struct BookInfo book[100];
	int n;
	int *ptrN = &n;
	char filename[] = "C:\\Users\\Admin\\Desktop\\BT07.txt";
	do{
		printf("************************MENU************************\n");
		printf("1. Nhap so luong va thong tin sach\n");
		printf("2. Luu thong tin sach tu file\n");
		printf("3. Hien thi thong tin sach tu file\n");
		printf("4. Thoat\n");
		printf("Lua chon cua ban: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so luong sach: ");
				scanf("%d",&n);
				bookInfo(book,ptrN);
				break;
			case 2:
			    saveToFile(book,n,filename);
				break;
			case 3:
				displayFromFile(filename);
				break;
			case 4:
				exit(0);
			default:
				printf("Vui long nhap lai: ");
		}
	} while(1==1);
	return 0;
}
