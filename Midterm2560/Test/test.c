/*
 * test.c
 *
 *  Created on: Mar 12, 2019
 *      Author: alexa
 */
#include <stdio.h>

int main()
{
	int rows_Columns;
	int counter = 1;
	printf("Print out a multiplication table");
	printf("enter number of columns and rows");
	fflush(stdout);
	scanf("%d", &rows_Columns);
	int multTable [rows_Columns] [rows_Columns];



	//print out table
	 int i,j,k = 0;
	 	 //rows
	     for(i = 0; i < rows_Columns ; i++)
	     //columns
	          for(j = 0; j < rows_Columns; j++)
	        	  (j+1)*counter = multTable[i][j];
	               multTable[i][j] = k++;

	 float floatingPoint [];
	return 0;
}

