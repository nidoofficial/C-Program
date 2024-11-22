#include <stdio.h>

int main ()
{

    int x;

    printf("How old are you?: ");
    scanf ("%d", &x);
    printf("\n");

    if ( x >= 0 && x <= 12)
    {
        printf("You Are A Child, Stay in School\n");
    }

    else if (x >= 13 && x <= 19)
    {
         printf("You Are a Teenager, Start Your Career Path.\n");
    }

    else if (x >= 20 && x <= 49)
    {
        printf("You Are An Adult, Focus on Making A lot of Money.\n");
    }

    else if (x >= 50 && x <= 100)
    {
         printf("You  Are a Senior, Just Enjoy Your Remaining life.\n");
    }

    return 0;
}
