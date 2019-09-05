#include <stdio.h>
void func(char s[]);


int main()
{
	char a[] = "abcd";
	printf("String a: %s",a);
	a++;
	func(a);
	return 0;
}

void func(char s[])
{
	s++;
}