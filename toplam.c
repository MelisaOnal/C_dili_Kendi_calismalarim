#include <stdio.h>
#include <stdlib.h>


int main(){
	int sayim ;
	int i ;
	int toplam = 0;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &sayim);
	
	for(i=1 ; i < sayim+1 ; i++)
	{
		toplam = toplam + i;
	}
	printf("Toplam degerim : %d", toplam);
	
	
return 0;
	
}
