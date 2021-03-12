#include <stdio.h>
#include <stdlib.h>

//enum kullanimi: Bu kullanimda kendi veri tipimizi olusturabiliriz.Ornegin aylar listesi olusturmak isteyelim ve bu aylari belli mevsimlere bolerek sinirlandiralim,ya da boolean diye bir 
//degisken olusturup true degerine 1 false degerine 0 atayalim cunku baska ihtimal yoktur ya 1 ya da 0 olacaktir.Bu tarz islemler icin enum yapisini kullaniriz.
//enum da biz deger vermesekte elemanlar 0,1,2,.. seklinde numaralandirilir.
int main() {
	
	enum Mevsimler{
		Ilkbahar=1,
		Yaz,
		Sonbahar,
		Kis
	}hangiMevsim;
	
	hangiMevsim=IIkbahar;              burada hangiMevsim=1 diyemeyiz..!!!
	
	switch(hangiMevsim)
	{
		case 1:
			printf("Mart-Nisan-Mayis");
			break;
		case 2:
			printf("Haziran-Temmuz-Agustos");
			break;
		case 3:
			printf("Eylul-Ekim-Kasim");
			break;
		case 4:
		    printf("Aralik-Ocak-Subat");
		    break;
		default:
			printf("Boyle bir mevsim yok :)");
		    break;
	}
	return 0;
}
