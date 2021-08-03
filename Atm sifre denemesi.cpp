#include<stdio.h> 
#include<stdlib.h> 
#include <string.h>
int main() {
 //Giriþ //para yatýr //para çek //fatura öde //para gönder // çýkýs 
 int i; 
 int secim; 
 int para = 1000; 
 int miktar; 
 // const int sifre; 
 char isim;
  int ypara; 
  int epara;
  
  printf("Isim Soyisim ve sifrenizi giriniz --->\n");
   printf("Isim : "); 
   scanf("%s",&isim); 
   printf("Sifre :\n"); 
   //scanf("%s",&sifre);
    //if(sifre == 3)
	{
    			  printf("______________________________\n");

	 printf("Hosgeldin %d\n",isim);
	  printf("Secim yapiniz\n");
	   printf("1-Para yatir\n");
	   printf("2-Para cek\n");
	    printf("3-Fatura ode\n");
		 printf("4-Para gönder \n");
		  printf("5-Cikis\n");
		  printf("______________________________\n");
		  printf("Secim yapiniz: "); 
		  scanf("%d",&secim);
		   char fat;
		    switch(secim) { 
			case 1 : printf("Miktar giriniz : ");
			 scanf("%d",&miktar);
			  ypara=miktar+para;
			   printf("Yeni Bakiyeniz :%d\n",ypara);
			    printf ("Eski Bakiye :%d\n",para); 
				printf("Yatitdiginiz Bakiye %d\n",miktar);
				 printf(" Secim yap :\n"); scanf("%d",&secim); 
				 //break; 
				 case 2 : printf("Miktar giriniz : ");
				  scanf("%d",&miktar);
				   epara=ypara-miktar; 
				   printf("Yeni Bakiyeniz :%d\n",epara);
				    printf ("Eski Bakiye :%d\n",ypara); 
					printf("Cektiginiz Bakiye %d\n",miktar);
					 printf(" Secim yap :\n");
					  scanf("%d",&secim); 
					  //break; //break; 
					  case 3 : printf("Odemek istediginiz faturayi girin : \n");
					   printf("Elektirk Fatursi 500TL = 1\n"); 
					   printf("Dogalgaz Faturasi 250TL = 2\n"); 
					   //printf("Su Faturasi 300TL = 3\n"); 
					   //break;
					    scanf("%d",&fat);
						 switch(fat) { 
						 int aypara;
						  int yapara; 
						  int yepara; 
						  case 1 :yepara = epara - 500;
						   printf("Faturaniz Odendi\n"); 
						   printf("Yeni Bakiyeniz :%d\n",yepara); 
						   // printf("%d",ypara); 
						   printf(" Secim yap :\n"); 
						   scanf("%d",&secim);
						    //break;
							 case 2 :
							 yapara = yepara - 250;
							  printf("Faturaniz Odendi\n"); 
							  printf("Yeni Bakiyeniz :%d\n",yapara);
							   printf("%d",yepara);
							    printf(" Secim yap :\n");
								 scanf("%d",&secim);
								  // break;
								   /*
								   case 3 : aypara = yapara - 300; 
								   printf("Faturaniz Odendi\n");
								    printf("Yeni Bakiyeniz :%d\n",aypara);
									 printf("%d",aypara);
									  printf(" Secim yap :\n"); 
									  scanf("%d",&secim);
									   // break; */ 
									   } 
									   //break;
									    int no; 
										int yapara; 
										int yaapara;
										 case 4 : printf ("Gondermek istediginiz hesapm numarisin giriniz \n");
										  scanf("%d",&no);
										   printf("Mevcut bakiyeniz :%d\n",yapara); 
										   printf ("Gondermek istediginiz miktari giriniz :\n");
										    scanf("%d",&miktar); yaapara=yapara-miktar;
											printf("Islem basariyla gerceklestirilmistir\n");
											 printf("kalan bakiye:%d\n",yaapara);
											  printf(" Secim yap :\n"); scanf("%d",&secim); 
											  //break;
											   case 5: system("cls");
											   printf("Program bitmistir Tesekkur ederiz...");
											    break ; 
												default: printf("Tanimsiz Islem\n");
												 break; 
												 }
												  } 
												  //else{
												  	//printf("Yanlis Sifre");
												 // }
												  return 0;
												   }

