#include <stdio.h>
#include <stdlib.h>

// ��lemin ger�ekle�tirmek i�in fonksiyon olu�turulur 
int ls(int dizi[], int n, int aranansayi){
	
	//D�ng� i�in de�i�ken atan�r
	int k;
	
	//Aranan sayiyi bulmak i�in d�ng� olu�turulur.
	for(k=0;k<n;k++){
		
		//Aranan sayi dizi i�inde var k de�i�keni d�nd�r�l�r yoksa -1 de�eri d�nd�r�l�r
		if(aranansayi==dizi[k])
		
		return k; 
		
	}
	return -1;	
}


int main(int argc, char *argv[]) {
	// De�i�kenler atan�r
	int n,aranansayi;
	
	//Kullan�c�dan dizinin boyutu istenir
	printf("Lutfen dizinin boyutunu giriniz: ");
	scanf("%d", &n);
	printf("\n");
	int k=0; // de�i�ken atan�r
	
	int dizi[k]; // Dizi atan�r
	
	// Dizinin elemanlar� kullan�cadan al�n�r
	while(k<n){
		
		printf("%d.sayi: ",k+1);
	    scanf("%d",&dizi[k]); 
	    k++;
	}
	printf("\n");
	printf("Lutfen aranan sayiyi giriniz: "); // Kullan�can aranan say� istenir.
	scanf("%d", &aranansayi);
	printf("\n");
	
	int sonuc=ls(dizi, n , aranansayi ); //Sonuc de�i�keni atan�r ve fonksiyon sonuc de�i�kenine atan�r
	
	//E�er sonuc -1 se sayinin dizi i�inde yok oldu�u belirtilir.
	if(sonuc == -1)
	printf("Aranan sayi dizi icinde bulunmamaktadir");
	
	//E�er sonuc -1 de�ilse sayinin dizi i�inde var oldu�u belirtilir.
	else 	
	printf("Aranan sayi dizi icinde bulunmaktadir");

    printf("\n\n");
	printf("ISIM: TAHA YASIN\n");
	printf("SOYISIM: CICEK\n");
	printf("OGRENCI NO: 1220505012\n");
    printf("PROGRAMIN YAPTIGI ISLEM: Linear search kullanarak bir dizi icinde eleman aramak");
    
	
	
	
	return 0;
}
