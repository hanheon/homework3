#include <stdio.h>

struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};  // 구조체 예약어 선언
int main()
{
    struct student pst;  //구조체  변수 선언

    printf("[----- [HanSeungheon] [%d] -----]\n", 2020023057);

    printf("size of student = %ld\n", sizeof(struct student));  // 패딩바이트로 인해 13 + 4 + 2 바이트보다 더 큰 값이 할당되었다.
    printf("size of int = %ld\n", sizeof(int));  //int형은 메모리에 4바이트 단위로 할당된다
    printf("size of short = %ld\n", sizeof(short));  //short형은 메모리에 2바이트 단위로 할당된다
    return 0;
}
