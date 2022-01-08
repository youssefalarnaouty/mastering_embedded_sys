/*
 *  Transpose.c
 *
 *  Write C Program to Transpose a matrix.
 *  Created on: Jan 8, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{

	int matrix[100][100],transposed[100][100],rows,cols;



	printf("Enter rows and column of matrix: ");
	fflush(stdout);
	scanf("%d",&rows);
	scanf("%d",&cols);

	printf("Enter elements of matrix\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
		printf("Enter elements of a%d%d: ",i+1,j+1);
		fflush(stdout);
		scanf("%d",&matrix[i][j]);
		}
	}

	printf("\nEntered Matrix: ");
	printf("\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d ",matrix[i][j]);
			fflush(stdout);
		}
		printf("\n");
	}


		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				transposed[j][i] = matrix[i][j];
			}
		}
		printf("\nTranspose of Matrix: ");
		printf("\n");
		for(int i=0;i<cols;i++){
				for(int j=0;j<rows;j++){
					printf("%d ",transposed[i][j]);
					fflush(stdout);
				}
				printf("\n");
			}


	return 0;
}
