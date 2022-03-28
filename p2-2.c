#include <stdio.h> 

void print1 (int *ptr, int rows);

int main()
{
    int one[] = {0, 1, 2, 3, 4};

    printf("[----- [HanSeungheon] [%d] -----]\n", 2020023057);

    printf("one = %p\n", one);
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);  // ary == &ary == &ary[0]
    printf("\n");

    print1(&one[0], 5);  //함수 호출

    return 0;
}
void print1 (int *ptr, int rows)  //*ptr은 주소를 받음.
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
    {
        printf("%p \t %5d\n", ptr + i, *(ptr + i));  // ptr + i는 주소를 나타낸다.
    }
    printf("\n");
}