#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /*
        Ask for height while
        user's input is > than 23
        and <= 0
    */
    
    int h;
    do
    {
        printf("height: ");
        h = GetInt();
    }
    while (h <= 0 || h > 23);
    
    /*
        Nested loop for print
        spaces, # and breaklines
    */
    
    int i, j, k;
    for(i = 0; i < h; i ++)
    {
        for(j = h - 1; j > i; j --) /* Draw spaces */
        {
            printf(" ");
        }
        
        printf("#");
        for(k = 0; k < i; k ++) /* Prints accumulated #'s */
        {
            printf("#");
        }
        printf("#");
        printf("\n");
    }
}