/* 
	*Isim: AMMAR AHMED ABDO SAEED
    *Numara: 141601032

*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int sayiBul(int sayi, int rand, int kackere);
int sayiBulmayiCalistir();

int TicTacToc();

int anaMenu();


int main(){



	anaMenu();



}

int	TekrarOynama(){
	char tekrarOynama;
	printf("\nTekrar oynamak ister misiniz (e-h) ? \n");
	scanf(" %c",&tekrarOynama);
	
	if(tekrarOynama=='e'){
		system("cls");
	}
	
	else {
	
		return anaMenu();
	}
	}



int anaMenu(){
	int secim;
	system("cls");
	printf("\n\t\t\t<<<<<<< ANA MENUYE HOSGELDINIZ >>>>>>>>\n\n");
	printf("\t\t\t\t 1. Sayiyi Bulma Oyunyu icin;\n\t\t\t\t 2. Tic Tac Toc Oynuyu Icin;\n \t\t\t\t 3. Cikmak Icin; \n");
	printf("\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
	printf("\nLutfen Seciminiz Yapiniz : ");
	scanf("%d",&secim);


	switch(secim){
		case 1:
			system("cls");
			sayiBulmayiCalistir();
			break;
		case 2:
			system("cls");
			TicTacToc();
			break;
		case 3:
			system("PAUSE");

	}
}


int sayiBulmayiCalistir(){

	int sayi,kackere;
	srand(time(NULL));
	int rast=rand()%100+1;
	int kacker=0;
	
	printf("\n\t\t***** Sayi Tahmini Oyununa Hosgeldiniz ******\n ");
	printf("\nTahmin ettigim sayiyi bulmaya calisin  :) : \n");
	scanf("%d",&sayi);
	
	sayiBul(sayi, rast, kackere);
	
	TekrarOynama();
	//sayiBulmayiCalistir();

	

}

sayiBul(int sayi, int rand, int kackere){
	
	if (sayi>rand){
		printf(" Asagiya");
		scanf("%d",&sayi);
		kackere++;
		sayiBul(sayi, rand, kackere);
	
	}
	else if (sayi <rand){
		printf("Yukariya");
		scanf("%d",&sayi);
		kackere++;
		sayiBul(sayi, rand, kackere);
		
	}
	else if(sayi==rand){
		printf("\t\t<<<<<<Tebrikler,%d sayiyi %d kerede buldunuz >>>>>>>",sayi,kackere);
	}
	
	
	//TekrarOynama();
	
	}

int TicTacToc(){

	while(1) {
   char arayuz[3][3]={
	{'1','2','3'},
	{'4','5','6'},
	{'7','8','9'}
	};
	int sayac=0;
	int berabere=0;
	printf("\n\t\t ****** Tic Tac Toc Oyununa Hosgeldiniz ******* \n");
	printf("\n\t\t      Bu Oyun iki Oyncu Icin Tasarlanmistir    \n");

	printf("\n");
	printf(" %c %c %c\n", arayuz[0][0], arayuz[0][1], arayuz[0][2]);
	printf(" %c %c %c\n", arayuz[1][0], arayuz[1][1], arayuz[1][2]);
	printf(" %c %c %c\n", arayuz[2][0], arayuz[2][1], arayuz[2][2]);


   int i,j,degistirme;
   char player,player1,player2;
   char tekrarOynama;
   char Xler='X', Olar='O';


while(1)	{



	for(degistirme=1;degistirme<=2;degistirme++){


	printf("\n%d. oyuncu (%c) : ",degistirme, (degistirme==1)?Xler:Olar);
    scanf(" %c",(degistirme==1)?&player1:&player2);
    berabere++;
	system("cls");

	for (i=0;i<3;i++){
		printf("\n");

		for (j=0;j<3;j++){

			if (player1==arayuz[i][j]){
				arayuz[i][j]='X';

			}
			else if(player2==arayuz[i][j]){
				arayuz[i][j]='O';
			}



				if (arayuz[0][0]==arayuz[0][1] && arayuz[0][0]==arayuz[0][2] && arayuz[0][1]==arayuz[0][2] ||
				arayuz[1][0]==arayuz[1][1] && arayuz[1][0]==arayuz[1][2] && arayuz[1][1]==arayuz[1][2] ||
				arayuz[2][0]==arayuz[2][1] && arayuz[2][0]==arayuz[2][2] && arayuz[2][1]==arayuz[2][2]||

				arayuz[0][0]==arayuz[1][0] && arayuz[0][0]==arayuz[2][0] && arayuz[1][0]==arayuz[2][0]||
				arayuz[0][1]==arayuz[1][1] && arayuz[0][1]==arayuz[2][1] && arayuz[1][1]==arayuz[2][1]||
				arayuz[0][2]==arayuz[1][2] && arayuz[0][2]==arayuz[2][2] && arayuz[1][2]==arayuz[2][2]||

				arayuz[0][0]==arayuz[1][1] && arayuz[0][0]==arayuz[2][2] && arayuz[1][1]==arayuz[2][2]||
				arayuz[0][2]==arayuz[1][1] && arayuz[0][2]==arayuz[2][0] && arayuz[1][1]==arayuz[2][0]
				)
				{
					printf("\a\n\n\t\t<<<<<< %d. OYUNCU( %c ) KAZANDI! >>>>>>>\n\n",degistirme,(degistirme==1)?Xler:Olar);
					sayac++;
					break;
				}

				if (berabere==9){ printf("Oyun Braber Bitmistir");  sayac++; break; }


			printf(" %c",arayuz[i][j]);
		}
		if (sayac) break;
	}
	if (sayac) break;
//	if (sayac) break;
}
if (sayac) break;



	}
	TekrarOynama();


	}

}
