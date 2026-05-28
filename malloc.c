#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define NULL 0
main()
{
	char *buffer;
	/*Allocating memory*/
	if((buffer=(char*)malloc(10))==NULL)
	{
		printf("malloc failed.\n");
		exit(1);
	}
	printf("Buffer of size %d created\n",_msize(buffer));
	strcpy(buffer,"HYDERBAD");
	prinf("\nBuffer contains:%s\n",buffer);
	/*Real location*/
	if((buffer=(char *)realloc(buffer,15))==NULL)
	{
		printf("Real location failed. \n");
		exit(1);
	}
	printf("\nBuffer size modoified.\n");
	printf("\nBuffer still contains: %s\n",buffer);
	strcpy(buffer,"SECUNDRABAD");
	printf("\nBuffer now contains: %s\n",buffer);
	free(buffer);
