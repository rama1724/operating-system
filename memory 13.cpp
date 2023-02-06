#include <stdio.h>
#include <stdlib.h>

// Driver code
int main()
{
	int size;
	printf("Enter limit of the text: \n");
	scanf("%d", &size);
	char str[size];
	printf("Enter some text: \n");
	scanf(" ");
	gets(str);
	printf("Inputted text is: %s\n", str);
	return 0;
}


// C program to illustrate the above
// concepts of memory allocation
#include <stdio.h>
#include <stdlib.h>

// Driver Code
int main()
{
	int size, resize;
	char* str = NULL;
	printf("Enter limit of the "
		"text: \n");
	scanf("%d", &size);

	str = (char*)malloc(size * sizeof(char));

	// If str is not NULL
	if (str != NULL) {
		printf("Enter some text: \n");
		scanf(" ");
		gets(str);
		printf("Inputted text by allocating"
			"memory using malloc() is: "
			"%s\n",
			str);
	}

	// Free the memory
	free(str);
	str = (char*)calloc(50, sizeof(char));

	// If str is not NULL
	if (str != NULL) {
		printf("Enter some text: \n");
		scanf(" ");
		gets(str);
		printf("Inputted text by allocating "
			"memory using calloc() is: "
			"%s\n",
			str);
	}

	printf("Enter the new size: \n");
	scanf("%d", &resize);
	str = (char*)realloc(str, resize * sizeof(char));

	printf("Memory is successfully "
		"reallocated by using "
		"realloc() \n");

	// If str is not NULL
	if (str != NULL) {
		printf("Enter some text: \n");
		scanf(" ");
		gets(str);
		printf("Inputted text by reallocating"
			" memory using realloc()is: "
			"%s\n",
			str);
	}

	// Free the memory
	free(str);
	str = NULL;

	return 0;
}
