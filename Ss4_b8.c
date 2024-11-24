#include <stdio.h>

int main(){
	int c1, c2, c3;
	printf("nhap canh thu 1 : ");
	scanf("%d",&c1);
	printf("nhap canh thu 2 : ");
	scanf("%d",&c2);
	printf("nhap canh thu 3 : ");
	scanf("%d",&c3);
	if (c1+c2>c3 || c1+c3>c2 || c3+c2>c1){
		printf("la 3 canh tam giac");
	}else{
		printf("khong phai 3 canh tam giac");
	}
	return 0;
}
