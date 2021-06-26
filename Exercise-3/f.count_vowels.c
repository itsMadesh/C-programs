//f. To	take a sentence	as input and count the number of vowels in it

#include <stdio.h>
#include <string.h>

int countVowels(char str[])
{
    int vowels = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
    }
    return vowels;
}
int main()
{
    char string[100];
    printf("Enter a string:");
    gets(string);
    int vowels = countVowels(string);
    printf("Vowels:%d", vowels);
}
