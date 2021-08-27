#include <stdio.h>
#include <string.h>
//a.find the total number of words
void printWordCount(char para[])
{
    char para_copy[strlen(para)];
    strcpy(para_copy, para);
    printf("para_copy = %s\n", para_copy);
    char *str = para_copy;
    int count = 0;
    while (strtok_r(str, " \t", &str))
    {
        count++;
    }
    printf("Total words:%d\n", count);
}
//b.Capitalize the first word of each sentences.
void printSentence(char para[])
{
    printf("After Capitalize the first word of each sentences:\n");
    char para_copy[strlen(para)];
    strcpy(para_copy, para);
    //printf("para_copy = %s\n", para_copy);
    char *str = para_copy;
    char *sentence;
    while ((sentence = strtok_r(str, ".", &str)))
    {
        char *word = strtok_r(sentence, " ", &sentence);
        printf("sentence=");
        for (int i = 0; word[i]; i++)
        {
            word[i] = toupper(word[i]);
        }
        printf("%s %s\n", word, sentence);
    }
}
//c.Replace a given word with another word.
void repl(char *a, char *b, int ast, int bst, int bend)
{
    for (int i = bst; i < bend; i++)
    {
        a[ast++] = b[i];
    }
    a[ast] = '\0';
}

void replace(char para[], char sub[], char rep[])
{
    int as = strlen(para);
    int bs = strlen(sub);
    int cs = strlen(rep);
    char s[as - bs + cs - 1];
    int i, j, k;
    for (i = 0; i < as; i++)
    {
        for (j = 0, k = i; j < bs; j++, k++)
        {
            if (para[k] == sub[j])
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if (j == bs)
        {
            break;
        }
    }
    if (j != bs)
        return;
    repl(s, para, 0, 0, i);
    repl(s, rep, i, 0, cs);
    repl(s, para, i + cs, i + bs, as);
    strcpy(para, s);
}

void printReplace(char para[], char sub[], char rep[])
{
    while (1)
    {
        char temp[strlen(para)];
        strcpy(temp, para);
        replace(para, sub, rep);
        if (strcmp(para, temp) == 0)
        {
            break;
        }
    }
}

int main()
{
    char para[1000];
    printf("Type a paragraph:\n");
    gets(para);
    printWordCount(para);
    printSentence(para);
    char sub[1000], rep[1000];
    printf("Enter a replacing word:");
    gets(sub);
    printf("Enter a another word:");
    gets(rep);
    printReplace(para, sub, rep);
    printf("After replace a given word with another word:\n%s\n", para);
}
