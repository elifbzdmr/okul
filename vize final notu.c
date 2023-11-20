#include <stdio.h>
int main(){
	int vize,final;
 	float ort;
 	printf("Ogrencinin Vize Notunu giriniz:");
 	scanf("%d",&vize);
 	if (vize<0 || vize > 100){
	printf("Ogrencinin Vize Notu 0-100 arasinda olmali:");
 	scanf("%d",&vize);
	 }
	printf("Ogrencinin Final Notunu giriniz:");
 	scanf("%d",&final);
 	if (final<0 || final > 100){
	printf("Ogrencinin Final Notu 0-100 arasinda olmali:");
 	scanf("%d",&final); 
	 }
 	ort=vize*40/100+final*60/100;
 	if(ort>=90)
            printf("Ogrencinin harfli notu:AA");
 	else if (ort>=85) 
            printf("Ogrencinin harfli notu:BA");
 	else if (ort>=75) 
            printf("Ogrencinin harfli notu:BB");
 	else if (ort>=65)
            printf("Ogrencinin harfli notu:CB");
	else if (ort>=60)
            printf("Ogrencinin harfli notu:CC");
	else if (ort>=50)
            printf("Ogrencinin harfli notu:DC");
	else if (ort>=45)
            printf("Ogrencinin harfli notu:DD");
	else if (ort>=40)
            printf("Ogrencinin harfli notu:FD");
	else
            printf("Ogrencinin harfli notu:FF");
getch();
return 0;	
}