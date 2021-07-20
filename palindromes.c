#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[1000], x1[20], x2[20]; int i;

    puts("Write your text here:\n");
    gets(text);                                // user enters the text with up to 1000 characters

    for(i = 0; i < strlen(text); i++)
    {
        if(text[i] == ' ' & text[i-1] != ' ')
        {
            strncpy(x1, text, i);              // copying word in text to x1
            x1[i] = '\0';                      // setting the end of x1
            strcpy(x2, x1);                    // copying x1 to x2
            strrev(x2);                        // reversing x2
            if(strcmp(x1, x2) == 0)            // comparing x1 with x2
            {
                printf("\n%s", x1);            // printing the word if it is palindrome
            }
            strcpy(text, text + i + 1);        // now text starts from the next word
            i = 0;
        }
    }
    return 0;
}
