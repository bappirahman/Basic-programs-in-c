#include<stdio.h>

int main()
{
    for(int r = 0; r <= 4; r++) {
        for(int c = 1; c <= 5;c++) {
            if(r < c)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
    return 0;
}