#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dollar;
    int masry = 15.73;
    printf ("Enter the number you want to convert: ");
    scanf("%d", &dollar);
    int result = masry * dollar;
    printf ("The result is: %d", result);

    return 0;
}
