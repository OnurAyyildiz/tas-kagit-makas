#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int T = 1;
	int K = 2;
	int M = 3;
	
	int i;
	int oyuncu = 0;
	int bot = 0;
	int bilgisayar = 0;
	int secim;
	srand(time(NULL));
	printf("1-tas,2-kagit,3-makas\n");
	
	for(i=0;i<5;i++)
	{
		printf("seciminizi giriniz:\n");
		scanf("%d",&secim);
		int bilgisayar = rand()%3+1;
		
		if(secim == 1)
		{
			if(bilgisayar == 1)
			{
				printf("berabere kaldiniz\n");
			}
			else if(bilgisayar == 2)
			{
				printf("bilgisayar kazandi\n ");
				bot += 1;
			}
			else if( bilgisayar == 3)
			{
				printf("kazandiniz\n");
				oyuncu += 1;
			}
			
		}
		
		else if(secim == 2)
		{
			if(bilgisayar == 1)
			{
				printf("kazandiniz\n");
				oyuncu += 1;
			}
			else if(bilgisayar == 2)
			{
				printf("berabere kaldiniz\n");
				
			}
			else if(bilgisayar == 3)
			{
				printf("bilgisayar kazandi\n");
				bot += 1;
			}
		}
		
		else if(secim == 3)
		{
			if(bilgisayar == 1)
			{
				printf("kaybettiniz\n");
				bot += 1;
			}
			else if(bilgisayar == 2)
			{
				printf("kazandiniz\n");
				oyuncu +=  1;
			}
			else if(bilgisayar == 3)
			{
				printf("berabere kaldiniz\n");
			}
		}
	
		else
		{
			printf("hatali giris 1 ile 3 arasinda secim yapiniz\n");
		}
	
	}
	
if(bot > oyuncu)
{
	printf("kaybettininiz bilgisayar = %d  oyuncu = %d",bot,oyuncu);
}
	
else if(oyuncu > bot)
{
	printf("kazandiniz oyuncu = %d  bilgisayar = %d",oyuncu,bot);
}

else
{
	printf("dostluk kazandi bilgisayar = %d  oyuncu = %d",bot,oyuncu); 
}	


}
	

