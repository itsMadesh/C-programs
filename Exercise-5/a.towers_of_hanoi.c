// Towers of hanoi

#include <stdio.h>
int I = 0;
void toh(int n, char J, char L, char K)
{
    if (n == 1)
    {
        printf("Move disk 1 from tower-%c to tower-%c\n", J, L);
        I++;
        return;
    }
    toh(n - 1, J, K, L);
    printf("Move disk %d from tower-%c to tower-%c\n", n, J, L);
    I++;
    toh(n - 1, K, L, J);
}

int main()
{
    int n;
    printf("Enter no.of disc:");
    scanf("%d", &n);
    toh(n, 'a', 'c', 'b');
    printf("Steps count for %d-disc:%d\n", n, I);
}
