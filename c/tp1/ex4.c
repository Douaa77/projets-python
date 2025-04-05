#include<stdio.h>
main(){
    int Xa , Ya , Xb , Yb ;
    double DIST ;
    printf("entrer les coordonnes du point A :  ") ;
    scanf("%d%d", &Xa , &Ya ) ;
    printf("entrer les coordonnes du point B : ") ;
    scanf("%d%d", &Xb , &Yb);
    DIST = sqrt((Xb-Xa)*(Xb-Xa)+ (Yb-Ya)*(Yb-Ya));
    printf("la ditance entre A et B est : %lf ", DIST);




}
