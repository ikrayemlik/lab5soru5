#include <stdio.h>
#include <stdlib.h>

/* Referansa g�re �a�r�y� kullanarak ��eleri de�i�tirmek i�in C'de bir program yaz�n.*/


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
