#include<stdio.h>

main()
{   int A , B , C;
    float P , S;
    printf("Entrer les longueurs des cotes du triangle A B C  "  );
    scanf("%d,%d,%d", &A,&B,&C);
    P=(A+B+C)/2.0;
    S=sqrt(P*(P-A)*(P-B)*(P-C));
    printf("La surface est %f", S);
}
