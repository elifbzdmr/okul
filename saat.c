/*printf("%02d : %02d : %02d",saat, dakika,saniye) kısmı metod çünkü geriye değer döndürmez 
if(saniye>=60)
		{
		dakika++;
		saniye=0;
			if(dakika>=60)
			{
			saat++;
			dakika=0;
			} 
		kısmı fonkisyon çünkü geriye değer dönüdür döndürmezse printf değeri bulunamaz*/

#include<stdio.h>
#include<unistd.h>
int main (void){
	int saat=0,dakika=0,saniye=0;
	
	while(1)
	{
	system("cls");
	
	printf("%02d : %02d : %02d",saat, dakika,saniye);
	saniye++;
		if(saniye>=60)
		{
		dakika++;
		saniye=0;
			if(dakika>=60)
			{
			saat++;
			dakika=0;
			}
		}
		sleep(1);	
		
	}

	return 0;
}