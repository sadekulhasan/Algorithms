#include <stdio.h>

int main()
{
    int coin_change[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int target, n;
    int i = 0;
    scanf("%d", &target);
    while (target > 0)
    {
        if (coin_change[i] <= target)
        {
            n = target / coin_change[i];
            target = target - (n * coin_change[i]);

            printf("Pay out %d Notes Coins of value %d\n", n, coin_change[i]);
        }
        i++;
    }
    return 0;
}