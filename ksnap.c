#include <stdio.h>

void print(float arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int i, j, number, capacity;
    printf("Enter The Number Of Objects: \n");
    scanf("%d", &number);
    float sadekul[number], hasan[number], ratio[number];
    float temp, profit = 0.00;
    float temps, temph, tempr;

    printf("\nEnter the capacity: \n");
    scanf("%d", &capacity);

    printf("\nEnter %d objects weight and value: \n", number);
    for (i = 0; i < number; i++)
    {
        scanf("%f %f", &sadekul[i], &hasan[i]);
        ratio[i] = hasan[i] / sadekul[i];
    }

    for (i = 1; i < number; i++)
    {
        j = i - 1;

        tempr = ratio[i];
        temph = hasan[i];
        temps = sadekul[i];

        while (j >= 0 && tempr >= ratio[j])
        {
            ratio[j + 1] = ratio[j];
            hasan[j + 1] = hasan[j];
            sadekul[j + 1] = sadekul[j];
            j--;
        }

        ratio[j + 1] = tempr;
        hasan[j + 1] = temph;
        sadekul[j + 1] = temps;
    }

    printf("\nPrice values: \n");
    print(hasan, number);

    printf("Weight value: \n");
    print(sadekul, number);

    printf("Profit and Wieght ratio: \n");
    print(ratio, number);

    i = 0;
    while (capacity > 0)
    {
        printf("\nProfit: %.2f  Capacity: %d  i: %d\n", profit, capacity, i);

        if (sadekul[i] <= capacity)
        {
            profit += hasan[i];
            capacity -= sadekul[i];
        }
        else
        {
            profit += capacity * ratio[i];
            capacity = 0;
        }
        i++;
    }

    printf("\nFinal Profit: %.2f\n", profit);

    return 0;
}