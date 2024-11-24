#include <stdio.h>

int main(){
	int somoi,socu,sotien;
	printf("Nhap so cu");
    scanf("%d",&socu);
    printf("Nhap so moi");
    scanf("%d", &somoi);
    int sodien = somoi - socu;
	if (sodien>0&&sodien<50){
		sotien = sodien*10000;
		printf("ban can tra la %d", sotien);
	} else if (sodien>=50 && sodien<100){
		sotien = sodien*15000;
		printf ("ban can tra %d", sotien);
	} else if (sodien>=100 && sodien<150){
		sotien = sodien*20000;
		printf("ban can tra la %d", sotien);
	} else if (sodien>=150 && sodien<200){
		sotien = sodien*25000;
		printf ("ban can tra la %d", sotien);
	} else if (sodien>=200){
		sotien = sodien*30000;
		printf ("ban can tra la %d", sotien);
	} else if (sodien<0){
		printf ("so dien khong hop le");
	}
	
	return 0;
}
