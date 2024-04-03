#include<stdio.h>
void main(){
    printf("\ntask-3\n");
    int num, first, last, sum;
    printf("enter any number: ");
    scanf("%d", &num);
    first = num;
    while (first >= 10)
    {
        first /= 10;
        last = num % 10;
    }
    sum = first + last;
    printf("%d", sum);

}