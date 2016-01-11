/**********************************************************

    1. Catch args from user
        1.1. Validate size of the arguments
            1.1.1. Returns an error when key parameter is missing
        1.2. Convert the 2nd argument into a int
    2. Iterate throuth the string
        2.1. Calculate the ascii code of each char
        2.3. Sum up the ascii number + the key number
        2.4. To reemplaze the new char
    3. Print the encripted string
        3.1. Checks when a char is mayus or minus

**********************************************************/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


void encripdStrng(string text, int k);


int main(int argc, string argv[])
{
    // 1.1. Validate size of the arguments
    if (argc != 2)
    {
        // 1.1.1. Returns an error when key parameter is missing
        printf("caesar: missing key parameter\n");
        return 1;
    }else
    {
        // 1.2. Convert the 2nd argument into a int
        int key = atoi(argv[1]);
        
        // 2. Iterate througth the string
        string text = GetString();
        encripdStrng(text, key);
        
        // Everything is OK
        return 0;
    }
}

// encripdStrng() recieves text that will be encrypted,
// and its encrypting keyey
void encripdStrng(string text, int k)
{
    string chars = text;
    // 2.1. Calculate the ascii code of each char
    int key = k;
    int ascii_num;
    
    // 3. Print the encripted string
    for (int i = 0, n = strlen(chars); i < n; i++)
    {
        // 3.1. Checks when a char is mayus or minus
        if ( islower(chars[i]) )
        {
            ascii_num = ( ((chars[i] + key) - 97) % 26) + 97;
        }else if ( isupper(chars[i]) )
        {
            ascii_num = ( ((chars[i] + key) - 65) % 26) + 65;
        }
        printf("%c", ascii_num);
    }
    printf("\n");
}