#include <stdio.h>
#include <stdlib.h>

// Ýþlemin gerçekleþtirmek için fonksiyon oluþturulur 
int ls(int dizi[], int n, int aranansayi){
	
	//Döngü için deðiþken atanýr
	int k;
	
	//Aranan sayiyi bulmak için döngü oluþturulur.
	for(k=0;k<n;k++){
		
		//Aranan sayi dizi içinde var k deðiþkeni döndürülür yoksa -1 deðeri döndürülür
		if(aranansayi==dizi[k])
		
		return k; 
		
	}
	return -1;	
}


int main(int argc, char *argv[]) {
	// Deðiþkenler atanýr
	int n,aranansayi;
	
	//Kullanýcýdan dizinin boyutu istenir
	printf("Lutfen dizinin boyutunu giriniz: ");
	scanf("%d", &n);
	printf("\n");
	int k=0; // deðiþken atanýr
	
	int dizi[k]; // Dizi atanýr
	
	// Dizinin elemanlarý kullanýcadan alýnýr
	while(k<n){
		
		printf("%d.sayi: ",k+1);
	    scanf("%d",&dizi[k]); 
	    k++;
	}
	printf("\n");
	printf("Lutfen aranan sayiyi giriniz: "); // Kullanýcan aranan sayý istenir.
	scanf("%d", &aranansayi);
	printf("\n");
	
	int sonuc=ls(dizi, n , aranansayi ); //Sonuc deðiþkeni atanýr ve fonksiyon sonuc deðiþkenine atanýr
	
	//Eðer sonuc -1 se sayinin dizi içinde yok olduðu belirtilir.
	if(sonuc == -1)
	printf("Aranan sayi dizi icinde bulunmamaktadir");
	
	//Eðer sonuc -1 deðilse sayinin dizi içinde var olduðu belirtilir.
	else 	
	printf("Aranan sayi dizi icinde bulunmaktadir");

    printf("\n\n");
	printf("ISIM: TAHA YASIN\n");
	printf("SOYISIM: CICEK\n");
	printf("OGRENCI NO: 1220505012\n");
    printf("PROGRAMIN YAPTIGI ISLEM: Linear search kullanarak bir dizi icinde eleman aramak");
    
	
	
	
	return 0;
}
