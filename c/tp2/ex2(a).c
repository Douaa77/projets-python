#include<stdio.h>
main() {
    int N , i , S , P , nombre ;
    float M ;
    printf("entrer un entier N : ") ;
    scanf("%d", &N) ;
    i = 0 ;
    S = 0 ;
    P = 1 ;
    while (i < N ) {
        printf("entrer le nombre %d: ", i+1) ;
        scanf("%d", &nombre) ;
        S += nombre ;
        P *= nombre ;
        i++ ;
    }
    M = S / N ;
    printf("la sommme est : %d " , S) ;
    printf("le produit est  : %d " , P) ;
    printf("la moyenne est  : %f " , M) ;
}





