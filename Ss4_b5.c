#include <stdio.h>

int main(){
	int num1, num2, num3;
	printf("nhap so nguyen thu 1 : ");
	scanf("%d",&num1);
	printf("nhap so nguyen thu 2 : ");
	scanf("%d",&num2);
	printf("nhap so nguyen thu 3 : ");
	scanf("%d",&num3);
	if (num1<num3&&num3<num2){
	    printf("so nguyen thuoc khoang giua so thu nhat va so thu hai");	
	} else if(num2<num3&&num3<num1){
    	printf("so nguyen thuoc khoang giua so thu hai va so thu nhat");
	} else{
		printf("so nguyen khong thuoc giua khoang so thu nhat va so thu hai");
	}
	return 0;
}
