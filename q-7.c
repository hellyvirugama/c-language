#include <stdio.h>

void main()
{
    int i, j, s;
    for (i = 5; i >= 1; i--)
    {
        int no = 10;
        for (s = i - 1; s >= 1; s--){
            printf("  ");
        }
            for (j = i; j <= 5; j++)
            {
                printf("%d ", no);
                no--;
            }
        printf("\n");
    }
}
