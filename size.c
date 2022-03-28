#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x;

    printf("[----- [HanSeungheon] [%d] -----]\n", 2020023057);
    
    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));

    //포인터는 가리키는 변수의 자료형을 가진다.
}