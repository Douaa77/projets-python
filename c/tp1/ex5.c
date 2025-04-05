#include<stdio.h>
main(){
    int PNET , TVA ;
    double PBRUT ;
    printf("entrer le prix net  :  ") ;
    scanf("%d",&PNET ) ;
    printf("entrer le TVA : ") ;
    scanf("%d",&TVA ) ;
    PBRUT = PNET + (PNET*(TVA / 100.00)) ;
    printf("le prix brut est : %lf ", PBRUT ) ;





}
