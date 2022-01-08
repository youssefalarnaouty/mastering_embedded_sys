/*
 *  MatrixSum.c
 *
 *  Write C Program to calculate the sum of 2 2x2 Matricies.
 *  Created on: Jan 8, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{


	float arr1[2][2],arr2[2][2];


	printf("Enter all elements of 1st matrix\n");
	fflush(stdout);
	for(int i=0; i < 2;i++){
		for(int j = 0; j<2;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf(" %f",&arr1[i][j]);

		}
	}

	printf("Enter all elements of 2nd matrix\n");
	fflush(stdout);
	for(int i=0; i < 2;i++){
		for(int j = 0; j<2;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr2[i][j]);
		}
	}

	printf("Sum of matrix:\n");
	for(int i=0; i < 2;i++){
		for(int j = 0; j<2;j++){
			printf("%.1f\t",arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}
