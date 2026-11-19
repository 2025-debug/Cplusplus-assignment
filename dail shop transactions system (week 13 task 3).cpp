/*NAME:Kimani David Mungai
REG NO:CT101/G/26615/25
COURSE:Computer science year two (GROUP B)*/

#include <stdio.h>

int main()
{
    FILE *fp;
    float amount, total = 0;
    int n, i;

    // Create and write sales transactions
    fp = fopen("sales.txt", "w");

    if (fp == NULL)
    {
        printf("Error creating file!");
        return 1;
    }

    printf("Enter number of transactions: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter transaction %d: ", i);
        scanf("%f", &amount);
        fprintf(fp, "%.2f\n", amount);
    }

    fclose(fp);

    // Open file for reading
    fp = fopen("sales.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    // Calculate total sales
    while (fscanf(fp, "%f", &amount) == 1)
    {
        total += amount;
    }

    printf("\nTotal sales for the day: %.2f\n", total);

    // Close file
    fclose(fp);

    return 0;
}