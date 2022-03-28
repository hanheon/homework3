#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];
    int *plist[5]  = {NULL,};  

    plist[0] = (int *)malloc(sizeof(int));
    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;

    printf("[----- [HanSeungheon] [%d] -----]\n", 2020023057);

    printf("value of list[0] = %d\n", list[0]);
    printf("address of list[0] = %p\n", list[0]);
    printf("value of list = %p\n", list);  //배열명은 포인터의 역할을 하며 배열의 시작주소를 값으로 가진다.
    printf("address of list (&list) = %p\n", &list);  //배열명의 주소는 배열의 시작주소와 같다.

    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);
    printf("address of list[1] = %p\n", &list[1]);
    printf("value of *(list+1) = %d\n", *(list + 1));  //배열명은 포인터의 역할을 한다.
    printf("address of list+1 = %p\n", list+1);  //배열명에 원하는 인자 값을 더하면 *(sizeof(자료형))를 하지 않아도 주소를 알 수 있다.

    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);  //*plist[0] = 200
    printf("&plist[0] = %p\n", &plist[0]); //
    printf("&plist = %p\n", &plist);
    printf("plist = %p\n", plist);  //배열명은 포인터의 역할을 하며 null값으로 초기화 된 상태에서 갑을 저장하면 주소가 생긴다.
    printf("plist[0] = %p\n", plist[0]);
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);

    
    free(plist[0]);  

}