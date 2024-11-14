#include <stdio.h>
#include <stdlib.h>

int main (){
    system ("cls");
    printf ("Selamat datang di dalam permainan tebak angka!!\n");
    int level, random, tebakan;
    do {
        printf("Level : ") ;
        scanf ("%d", &level);

            if (level < 0)
            {
                printf("Tolong masukkan bilangan bulat positif.\n");
            }

    } while(level <= 0);

    srand(time(0));
    random = rand() % level + 1;

    do {

        printf ("tebak angka : ");
        scanf("%d", &tebakan);

            if(tebakan < random){
                printf("Terlalu kecil!\n");
            } else if(tebakan > random)
            {
                printf("Terlalu besar!\n");
            }else{
                printf("Gacorrr maseee!\n");
            }

    } while (tebakan != random);
    
    return 0;
}