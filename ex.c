

#include<stdio.h>
int main()
{
	int n = 10;
	void *ptr = &n;                          // pointed to any data of any data type
	printf("%d", *(int*)ptr);           // ptr typecasted first then dereferencing
	return 0;
}
