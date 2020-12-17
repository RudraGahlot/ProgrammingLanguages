#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int A , B, ADD , SUBTRACT , MULTIPLY;
    float DIVIDE;

    printf("enter two integers\n");
    scanf("%d%d" , &A , &B);

    ADD=A+B;
    SUBTRACT=A-B;
    MULTIPLY=A*B;
    DIVIDE=A/(float)B;

    printf("SUM = %d\n" , ADD);
    printf("DIFFERENCE = %d\n" , SUBTRACT);
    printf("MULTIPLICATION = %d\n" , MULTIPLY);
    printf("DIVISION = %lf\n" , DIVIDE);

    return 0;
}
