#include <stdio.h>

struct laptop
{
    char l_name[100];
    char c_name[100];
    int l_price;
    char l_pro[100];
};

void main()
{
    struct laptop l[100];
    int no;

    printf("Enter the number of laptop details: ");
    scanf("%d", &no);

    for (int i = 0; i < no; i++)
    {
        printf("\nEnter laptop details %d:\n", i + 1);

        printf("Enter laptop name: ");
        scanf("%s", l[i].l_name);

        printf("Enter company name: ");
        scanf("%s", l[i].c_name);

        printf("Enter the price: ");
        scanf("%d", &l[i].l_price);

        printf("Enter the processor: ");
        scanf("%s", l[i].l_pro);

        printf("\n");
    }

    printf("Laptop Details are: \n");
    for (int i = 0; i < no; i++)
    {
        printf("\nLaptop %d\n", i + 1);
        printf("Laptop name is: %s \n", l[i].l_name);
        printf("Company name is: %s \n", l[i].c_name);
        printf("Price is : %d \n", l[i].l_price);
        printf("Processor is: %s \n", l[i].l_pro);
        printf("\n");
    }
}
