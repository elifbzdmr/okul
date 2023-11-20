#include<stdio.h>
#include<conio.h>

int main(void){
	int sayi, koltuk, masa, sandalye;
	float toplam;
	char cevap;
a:
	printf("Urun cesidi nedir?(1 koltuk, 2 masa, 3 sandalye):");
	scanf("%d",&sayi);
		switch (sayi){
			case 1:
				printf("urun birim fiyati 20.50 dir. Kac adet sattiniz:");
				scanf("%d",&koltuk);
				koltuk+=koltuk;
				break;
			case 2:
				printf("urun birim fiyati 12.75 dir. Kac adet sattiniz:");
				scanf("%d",&masa);
				masa+=masa;
				break;
			case 3:
				printf("urun birim fiyati 7.80 dir. Kac adet sattiniz:");
				scanf("%d",&sandalye);
				sandalye+=sandalye;
				break;
		}
		
		
	
	printf("Baska urun satisi yaptiniz mi:");
		if (cevap=='e' || cevap=='E')
		{
			printf("\n");
			goto a;
		}
		else {
			toplam=(koltuk*20.50)+(masa*12.75)+(sandalye*7.80);
			printf("toplam tutar: %f", toplam);
			
		} 
		
	
	
	
	
return 0 ;
}