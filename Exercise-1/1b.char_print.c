//b. To	echo the	character received	as	input demonstrating	scanf()	and	printf().

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    printf("You entered '%c'", ch);
    return 0;
}