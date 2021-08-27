/*b. Write the	function int countchars(char string[], int ch) which returns the number	of	
times the character ch appears in the string*/

#include <stdio.h>
#include <string.h>

int countchars(char string[], char ch)
{
    int count = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == ch)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char str[200], ch;
    printf("Enter a string:");
    gets(str);
    printf("Enter the charcter:");
    scanf("%c", &ch);
    printf("%d\n", countchars(str, ch));
    return 0;
}