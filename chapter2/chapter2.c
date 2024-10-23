#include <stdio.h>
#include <stdlib.h>

void mo(void)
{
    int b1, b2, b3;
    printf("Give three marks:");
    scanf("%d %d %d", &b1, &b2, &b3);
    float mo = (b1 + b2 + b3) / 3.0;
    if (mo >= 5)
        printf("You passed with a mark of %f.\n", mo);
    else
        printf("You didn't pass, try again.\n");
}

void find_errors(void)
{
    int b1, b2, b3;
    printf("Give three integers:\n");
    scanf("%d %d", &b1, &b2);
    scanf("%d", &b3);
    if (b3 == 1)
        printf("The last number was 1\n");
    else
        printf("The last number was not 1\n");
    printf("The end");
    printf("\n");
}

int main(void)
{
    // printf("This sentence will be executed.\n");
    // exit(0);
    // printf("This sentence will never be executed.\n ");
    // mo();
    find_errors();

    return 0;
}
