#include <stdio.h>
#include<string.h>
   int ktp,code,jml,bill,bali,cod;
   int harga;
   char nama[200];
   char byr;
   char pesawat[20],jurusan[20],land[20],take[20];
   char lan[20],tak[20];
   int kode[4] = {1,2,3,4};
   char maskapai[][50] = {"Garuda Indonesia","Batik Air","Citilink","Air Asia"};
   char departure[][50] = {"SOC - JKT","SOC - JND","SOC - SG","SOC - GWS"};
   char landing[][200] = {"09.00","13.30","17.00","21.45"};
   char takeoff[][200] = {"09.15","13.45","17.15","22.00"};
   int price[4] = {657000,348000,2358000,463000};
void input()
{
    system("color E");
    printf("---------------------------------------------\n");
    printf("\tSistem Pemesanan Tiket Pesawat\n");
    printf("---------------------------------------------\n");
    printf("NOMOR KTP \t\t= ");
    scanf("%d",&ktp);
    printf("NAMA \t\t\t= ");
    scanf("%s",&nama);
    printf("Kode Penerbangan \t= ");
    scanf("%d",&cod);
    if (cod == kode[0])
    {
        strcpy(pesawat,maskapai[0]);
        strcpy(jurusan,departure[0]);
        harga=price[0];
        strcpy(land,landing[0]);
        strcpy(take,takeoff[0]);
    }
     if (cod == kode[1])
    {
        strcpy(pesawat,maskapai[1]);
        strcpy(jurusan,departure[1]);
        harga=price[1];
        strcpy(land,landing[1]);
        strcpy(take,takeoff[1]);
    }
     if (cod == kode[2])
    {
        strcpy(pesawat,maskapai[2]);
        strcpy(jurusan,departure[2]);
        harga=price[2];
        strcpy(land,landing[2]);
        strcpy(take,takeoff[2]);
    }
     if (cod == kode[3])
    {
        strcpy(pesawat,maskapai[3]);
        strcpy(jurusan,departure[3]);
        harga=price[3];
        strcpy(land,landing[3]);
        strcpy(take,takeoff[3]);
    }
    printf("Jumlah Tiket \t\t= ");
    scanf("%d",&jml);
    bill=harga*jml;
    printf("Bayar \t\t\t= Rp.%d\n\n",bill);
    printf("Bayar Sekarang (y/n) = ");
    scanf("%s",&byr);
}
void tiket()
{
    system("color B");
    printf("-------------------------------------------------------\n");
    printf("\t\t\tE - Ticket\n");
    printf("-------------------------------------------------------\n");
    printf("\tNO KTP\t\t\t= %d\n",ktp);
    printf("\tNama\t\t\t= %s\n",nama);
    printf("\tMaskapai\t\t= %s\n",pesawat);
    printf("\tPrice \t\t\t= Rp.%d\n",bill);
    printf("\tTime Destination\t= %s - %s\n",land,take);
    printf("-------------------------------------------------------\n");
}
void main()
{
    input();
    if (byr=='y')
    {
        system("cls");
    }
    tiket();
}
