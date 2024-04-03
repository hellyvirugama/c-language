#include<stdio.h>
void main(){
    int no;
    printf("Enter the number: ");
    scanf("%d", &no);

    printf("Odd numbers =  %d:\n", no);
    for(int i = 1; i <= no; i++){ 
        if(i % 2 != 0){ 
            printf("%d\n", i);
        }
    }
}
