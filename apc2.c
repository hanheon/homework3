#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];  // 5개의 정수의 배열을 선언
    int *plist[5];  // 정수에 대한 5개의 포인터를 선언

    list[0] = 10;  
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int));  //배열의 첫번째 요소의 포인터로 int형 자료형에 메모리 동적할당

    printf("[----- [HanSeungheon] [%d] -----]\n", 2020023057);

    printf("list[0] \t= %d\n", list[0]);
    printf("address of list \t= %p\n", list);
    printf("address of list[0] \t= %p\n", &list[0]);   // list == &list[0] == &list
    printf("address of list + 0 \t= %p\n", list+0);  // (list + i) 와 &list[i]는 항상 같다.
    printf("address of list + 1 \t= %p\n", list+1);
    printf("address of list + 2 \t= %p\n", list+2);
    printf("address of list + 3 \t= %p\n", list+3);   
    printf("address of list + 4 \t= %p\n", list+4);  // 배열명은 포인터의 기능을 가지고 있다. 이때, 원하는 인자를 더해주면 가리키는 자료형의 크기를 곱해서 더해주게 된다.
    printf("address of list[4] \t= %p\n", &list[4]);
    
    free(plist[0]);  //동적할당 메모리 해제
}
