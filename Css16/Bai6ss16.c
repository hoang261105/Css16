#include<stdio.h>
struct Student{
	char name[50];
	int age;
	char sdt[20];
	char email[20];
};
int main(){
	FILE *f = NULL;
	int n;
	f = fopen("C:\\Users\\Admin\\Desktop\\BT06.txt","w");
	if(f != NULL){
		printf("Nhap so sinh vien: ");
		scanf("%d",&n);
		struct Student id[n];
		for(int i=0; i<n; i++){
			printf("Nhap thong tin sinh vien:\n");
			printf("Nhap ten sinh vien: ");
	        scanf("\n");
	        gets(id[i].name);
	        printf("Nhap tuoi: ");
	        scanf("%d", &id[i].age);
	        printf("Nhap so dien thoai: ");
	        scanf("%s", &id[i].sdt);
	        printf("Nhap email: ");
	        scanf("\n");
	        gets(id[i].email);
        }
		fprintf(f,"Thong tin sinh vien:\n");
		for(int i=0; i<n; i++){
			fprintf(f,"Ho va ten: %s\n",id[i].name);
		    fprintf(f,"Tuoi: %d\n",id[i].age);
		    fprintf(f,"So dien thoai: %s\n",id[i].sdt);
		    fprintf(f,"Email: %s\n",id[i].email);
		}
	}
	fclose(f);
	return 0;
}
