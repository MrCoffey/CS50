#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitials(string name);

int main(void)
{
    string name = GetString();
    printInitials(name);
}

// Prints capitalized initial
void printInitials(string name)
{
    // prints only the first letter
    printf("%c", toupper(name[0]));
    
    // iterates througth the strings
    for(int i = 0, c = strlen(name); i < c; i++)
    {
        // prints the next char right when a space is detected
        if (name[i] == ' ' || name[i] == '\0')
        {
            printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");
}
