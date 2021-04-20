#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Olusturacaginiz dikdortgenin enini ve boyunu lutfen giriniz=\n");   //kullanicidan en ve boy alinmistir
    scanf("%d %d",&x,&y);
    printf("EN = %d\n",x);
    printf("BOY = %d\n",y);
    int i,j;
    for( i=1;i<=x; i++)                          // alinan en sayisi kadar A bastirilmistir
          for (j=1;j<=y;j++)                     // alinan boy sayisi kadar A bastirilmistir
        {

           printf("A");
            if(j>=y){                            //dikdortgen olusturmak icin bir alt satira gecilmistir
            printf("\n");
            }

        }


    return 0;
}
