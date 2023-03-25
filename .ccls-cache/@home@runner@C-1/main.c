#include <stdio.h>

int bit_value(unsigned number, int pos)
{
    if (pos < 0 || pos > 31)
    {
        return -1; // return -1 in case of invalid position
    }
    int value = (number >> pos) & 1;
    return value;
}

int main()
{
    int num, pos, value;
    printf("enter number: ");
    scanf("%d", &num);
    printf("enter position (0 to 31): ");
    scanf("%d", &pos);
    value = bit_value(num, pos);

    if (value == -1)
    {
        printf("Position should be between 0 and 31\n");
    }
    else
    {
        printf("value is %d\n", value);
    }

    return 0;
}