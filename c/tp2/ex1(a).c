#include<stdio.h>
main() {
    int A , B , C , Max ;
    printf("entrer trois  entiers : ") ;
    scanf("%d%d%d", &A , &B , &C) ;
    Max = A ;
    if (B>A) {
            Max = B ;
            if (C>B) {
                Max = C ;
            }
        }
    else {
        if (C>A) {
            Max = C ;
        }
    }
    printf("le max est : %d " , Max) ;











}
