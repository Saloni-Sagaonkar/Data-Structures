#include<stdio.h>
int main()
{
	int n = 10;
	void *ptr = &n;                          // pointed to any data of any data type
	printf("%d", *(int*)ptr);           // ptr typecasted first then dereferencing
	return 0;
}





#include<stdio.h>
#include <stdlib.h>
int main()
{
	int i, n;
	printf("Enter the number of integers: ");
	scanf("%d", &n);                                                     // & --> n representing the value and requires the address
	int *ptr = (int *)malloc(n*sizeof(int));                 //size of n integers -->malloc return a void pointer--> typecaste to an integer pointer 
	
	if(ptr == NULL)
	{
		printf("Memory not available.");
		exit(1);
	}
	for(i=0; i<n; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", ptr + i);                       //ptr contains the first bytes of memory --> 1000+0 , 1000+1*4=1004, 1008,...
		                                                            // ptr --> already giving the address so no need of &
	}            
	for(i=0; i<n; i++)
	{
		printf("%d ", *(ptr+i));                 //dereferencing it
	}
	return 0;
}


#include<stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int *ptr = (int *)malloc(2*sizeof(int));         //malloc function allocating 8 bytes of memory, also return the address       of                                                                                                                                                  the 1st byte of memory
	
	if(ptr == NULL)
	{
		printf("Memory not available.");
		exit(1);
	}
	printf("Enter the two integer: \n");
	for(i=0; i<2; i++)
	{
		scanf("%d", ptr + i);
	}
	
	//memory allocation for 2 more integer
	ptr = (int *)realloc(ptr, 4*sizeof(int));                                       //ptr--> ointer to the previously allocated memory
	if(ptr == NULL)
	{
		printf("Memory not available.");
		exit(1);
	}
	printf("Enter 2 more integers: \n");
	for(i=2; i<4; i++)
	{
		scanf("%d", ptr + i);
	}
	//printing the value on the screen
	for(i=0; i<4; i++)
	{
		printf("%d ", *(ptr + i));
	}
	return 0;
}


