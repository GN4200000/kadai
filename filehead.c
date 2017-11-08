#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	FILE *file;
	int i, n;

	file = fopen(argv[1],"r");
	if(file == NULL)
	{
		printf("%sが開けません\n", argv[1]);
	}

	for(i = 0 ; i < 10 ; i++)
	{
		n = fgetc(file);
		if(n == EOF)
		{
			printf("\nerror\n");
			exit(1);
		}
		printf("%d", n);
	}

	printf("\n");

	return(0);
}
