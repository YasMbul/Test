#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");
    int i, j;
    char huruf[26]; 

    printf("Masukkan teks yang ingin di deskripsi: ");
    scanf("%s", huruf); 

    for (i = 0; i <= 26; i++){
        printf("K = %d \n", i);
        for(j = 0; j < 26; j++){
            if (huruf [j] >= 97 && huruf [j] <= 122){              
                huruf[j] = huruf [j] + 1;
                if (huruf[j] > 122){
                    huruf[j] = huruf[j] - 26;
                }
            }
            printf("%c", huruf[j]);
        }
        printf("\n");
    }
    return 0;
}