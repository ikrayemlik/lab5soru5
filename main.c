#include <stdio.h>
#include <stdlib.h>

/* Referansa göre çaðrýyý kullanarak öðeleri deðiþtirmek için C'de bir program yazýn.*/


int degistir(int *ptr1,int *ptr2,int *ptr3)
{
int gecici;
gecici=*ptr1;
*ptr1=*ptr2;	
*ptr2=*ptr3;
*ptr3=gecici;		
	
}

int main() {
	int a=7,b=5,c=6;
	printf("degistirmeden onceki deger:  %d\n %d\n %d\n",a,b,c);
	degistir(&a,&b,&c);
	printf("degistirdikten sonraki deger:  %d\n %d\n %d \n",a,b,c);	
	return 0;
}
