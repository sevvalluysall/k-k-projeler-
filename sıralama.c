#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,temp,arr[10];
   printf("KUCUKTEN BUYUGE CIFT SAYILARI BULMA\n");
   printf("10 ADET SAYI GIRIN\n");
   for(i=0;i<10;i++)
   {
       printf("%d. sayi=",i+1);                  //Kullanicidan 10 adet sayi girilmektedir.
       scanf("%d",&arr[i]);
   }

            for(i=0;i<10;i++){

            for(j=0;j<10;j++){

            if(arr[i]<arr[j]){

                temp=arr[i];                     //Kucukten buyuge siralama islemi yapiliyor.
                arr[i]=arr[j];
                arr[j]=temp;
           }
           }
           }
                 for(i=0;i<10;i++)
                 {
                     if(arr[i]%2==0){            //Eger sayi ciftse ekrana basiliyor.
                        printf("%d\n",arr[i]);}

                 }

    return 0;
}
