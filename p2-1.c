#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
    printf("[----- [HanSeungheon] [%d] -----]\n", 2020023057);

    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;  //input배열에 값 저장

    /* for checking call by reference */
    printf("address of input = %p\n", input);

    answer = sum(input, MAX_SIZE);
    printf("The sum is: %f\n", answer);
}
float sum(float list[], int n) //list[]는 주소 값을 받으므로 포인터 역할을 한다.
{
    printf("value of list = %p\n", list);  //배열명은 포인터로 배열의 시작 주소를 가진다.
    printf("address of list = %p\n\n", &list); 

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i]; 
    return tempsum;
}