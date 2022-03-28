#include <stdio.h>

int main()
{
    int ary[5];

    printf("[----- [HanSeungheon] [%d] -----]\n", 2020023057);

    printf("%d\n", &ary);
    printf("%d\n", &ary[0]);  // 첫 번째 배열 요소의 주소
    printf("%d\n", ary);  //배열명은 변수로 첫 번째 배열 요소의 주소 값을 가진다. 


    return 0;
}