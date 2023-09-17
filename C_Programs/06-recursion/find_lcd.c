// find Least common divisior of two numbers
#include <stdio.h>

int first, second;

int find_lcd(int n)
{
    static int i = 2;

    if (i <= n)
    {
        if (first % i == 0 && second % i == 0)
        {
            return i;
        }

        else
        {
            i++;
            find_lcd(n);
            return i;
        }
    }
}
int main()
{
    int min, lcd;
    printf("Enter First Number: ");
    scanf("%d", &first);
    printf("Enter Second Number: ");
    scanf("%d", &second);
    min = first < second ? first : second;

    lcd = find_lcd(lcd);
    printf("%d", lcd);
    return 0;
}