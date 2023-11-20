#include<stdio.h>
#include<conio.h>

int main(void){
	
	float sayi1,sayi2;
	char islem, cevap;
	
	printf("Hesap makinesine hosgeldiniz.\nIslem yapmak istediginiz sayilari seciniz");
	printf("\nsayi:");
	scanf("%f",&sayi1);
b:
	printf("sayi:");
	scanf("%f",&sayi2);
a:
	printf("yapmak istediginiz islemi seciniz(+,-,*,/);");
	scanf(" %c",&islem);
	
		switch(islem){
			case '+':
				sayi1 += sayi2;
				break;
			case'-':
				sayi1 -= sayi2;
				break;       
			case'*':
				sayi1 *= sayi2;
				break;       
			case'/':
				sayi1 /= sayi2;
					if (sayi2==0){
					printf("tanimsiz deger");
					return 0;
					}
				break;       
			default:
				printf("Hatali bir islem girdiniz");
				goto a;
				break;
				}
c:
	printf("Devam edilsin mi?(e/h):\n");
	cevap = getche(); 
		if (cevap=='e' || cevap=='E')
		{
			
			printf("\n");
			goto b;
		}
		else if (cevap=='h' || cevap=='H')
		{
			printf("\n");
			printf("sonuc: %.2f",sayi1);
		}
		else{
			printf("Hatali bir karakter girdiniz.");
			goto c;
		}
	
	
	

	return 0; 
}