#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Concatenates the strings "Hello " and "World!" together, and
 * prints the concatenated string.
 */
void eleven()
{
	/*char *s = "Hello ";
	char *h=(char*)malloc(13*sizeof(char));
	strcpy(h,s);
	strcat(s, "World!");
	printf("%s\n", s);
	free(h);*/
	char *s=(char*)malloc(sizeof(char)*15);
	memset(s,0,15);
	strcat(s,"Hello ");
	strcat(s,"World!");
	printf("%s\n",s);
	free(s);
}


/**
 * Creates an array of values containing the values {0.0, 0.1, ..., 0.9}.
 */
void twelve()
{
	float *values=(float *)malloc(sizeof(float)*10);

	int i, n = 10;
	for (i = 0; i < n; i++)
		values[i] = (float)i / n;

	for (i = 0; i < n; i++)
		printf("%f ", values[i]);
	printf("\n");
	free(values);
}


/**
 * Creates a 2D array of values and prints out the values on the diagonal.
 */
void thirteen()
{
	int **values;

	int i, j;
	values = (int **)malloc(10 * sizeof(int *));
	for (i = 0; i < 10; i++){
		values[i]=(int *)malloc(10*sizeof(int));
		for (j = 0; j < 10; j++)
			values[i][j] = i * j;
	}
	for (i = 0; i < 10; i++){
		printf("%d ", values[i][i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
		free((void*)values[i]);
	}
	free((void*)values);
}


/**
 * Prints out a specific string based on the input parameter (s).
 *
 * @param s
 *     Input parameter, used to determine which string is printed.
 */
void fourteen(const char *s)
{
	//switch (s)
	/*case "white":
			printf("Green and WHITE!\n");
			break;

		case "green":
			printf("GREEN and white!\n");
			break;

		default:
			printf("green and white!\n");
			break;
	}*/
	if(!strcmp(s,"white")){
		printf("Green and WHITE!\n");
	}
	else if(!strcmp(s,"green")){
		printf("GREEN and white!\n");
	}
	else{
		printf("green and white!\n");
	}
}


/**
 * Prints out a specific string based on the input parameter (value).
 *
 * @param value
 *     Input parameter, used to determine which string is printed.
 */
void fifteen(const int value)
{
	switch (value)
	{
		case 1:
			printf("You passed in the value of one!\n");
			break;

		case 2:
			printf("You passed in the value of two!\n");
			break;

		default:
			printf("You passed in some other value!\n");
			break;
	}
}
