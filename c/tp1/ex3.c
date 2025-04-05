#include<stdio.h>
#include<math.h>
main(){
    int A , B , C  ;
    float P , S ;
    printf("entrer les longueurs des trois cotes du triangle A B C :  ");
    scanf("%d %d %d",&A ,&B ,&C) ;
    P = (A + B + C ) / 2.0 ;
    S = sqrt(P*(P-A)*(P-B)*(P-C)) ;
    printf("la surface est : %f  ", S );






}
