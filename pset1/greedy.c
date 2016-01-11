#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int acc = 0;
    float float_owed;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int pennie = 1;
    
    do 
    {
        printf("O hai! How much change is owed?\n");
        float_owed = GetFloat();
    }
    while( float_owed < 0 );
    
    int owed = round(float_owed * 100);
    
    while( owed >= quarter )
    {
        owed = owed - quarter;
        acc = acc + 1;
    }
    while( owed >= dime )
    {
        owed = owed - dime;
        acc = acc + 1;
    }
    
    while( owed >= nickel )
    {
        owed = owed - nickel;
        acc = acc + 1;
    }
    
    while( owed >= pennie )
    {
        owed = owed - pennie;
        acc = acc + 1;
    }

    printf("%i\n", acc);
}