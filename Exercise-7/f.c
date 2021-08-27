// f.Write a program to accept	a file name	as command line argument.
// i.Display the contents of the file where each word will be displayed on a
// new line and display proper message if file does not exist.
// ii.Display no. of vowels stored in the file.
// iii.Display no. of “the” stored in the file.
// iv. Copy contents of the file to another file.

#include <stdio.h>
#include <string.h>
FILE *fp1, *fp2;

// i.Display the contents of the file where each word will be displayed on a newline.
void display_newlineWord(char word[])
{
    printf("\n(i).Display all words in given file as newline:");
    while ((fscanf(fp1, "%s", word)) != EOF)
    {
        printf("\n%s", word);
    }
}

// ii.Display no. of vowels stored in the file.
void count_vowels(int vowels, char ch)
{
    fseek(fp1, 0, SEEK_SET);
    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
    }
    printf("\n(ii).Total Vowels:%d", vowels);
}

// iii.Display no. of “the” stored in the file.
void count_the(int the, char word[])
{
    fseek(fp1, 0, SEEK_SET);
    while ((fscanf(fp1, "%s", word)) != EOF)
    {
        if (strcmp(word, "the") == 0)
        {
            the++;
        }
    }
    printf("\n(iii).Total-\"the\":%d", the);
}

// iv. Copy contents of the file to another file.
void copy_contents(char ch)
{
    fseek(fp1, 0, SEEK_SET);
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }
    printf("\n(iv).Copy contents of file to another file is done");
}

int main(int argc, char **argv)
{
    char ch, word[100];
    int vowels = 0, the = 0;
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "w");
    if (fp1 == NULL)
    {
        printf("file-%s is not opened\n", argv[1]);
        return 0;
    }
    if (fp2 == NULL)
    {
        printf("file-%s is not opened\n", argv[2]);
        return 0;
    }
    display_newlineWord(word);
    count_vowels(vowels, ch);
    count_the(the, word);
    copy_contents(ch);
    fclose(fp1);
    fclose(fp2);
}

