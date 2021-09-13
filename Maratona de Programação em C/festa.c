#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int main(){

    int N, i, j;
    int a[1001];
    int b[1001];
    int contA, contB;
    contA = contB = 0;

    scanf("%d", &N);

    while(scanf("%d", &a[contA]) != EOF){


        scanf("%d", &b[contB]);
        
        contA++;
        contB++;
    }

    for(i = 0; i < contA; i++){

        for(j = 0; j < contB; j++){

            if(a[i] == b[j]){
                printf("Lascou...\n");
                return 0;
            }

        }

    }

    printf("FESTA!");

    return 0;
}