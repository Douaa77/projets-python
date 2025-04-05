#include <stdio.h>

main(){
    int A,B,C,X;

    printf("Entrez la valeur de A, B, et C : ");
    scanf("%d %d %d", &A, &B, &C);
    X = A;
    A = B;
    B = C;
    C = X;
    printf("Les variables A, B, C ont pris les valeurs : %d   %d   %d",A,B,C);
}
