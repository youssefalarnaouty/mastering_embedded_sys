/*
 *
 *  Created on: Jan 18, 2022
 *      Author: Youssef Zaki
 */

#include <stdio.h>

int maxcountOnes(int num){
	int count =0;
	int maxcount=0;

	for(int i=0;i<sizeof(num);i++){
		if(num & (1<<i))
			count++;
		else{
			if(count>maxcount){
				maxcount=count;
				count =0;
			}
			else
				count=0;
		}
	}
	if(count>maxcount)
		maxcount=count;

	return maxcount;
}


int main() {

	int num;
	scanf("%d",&num);
	printf("%d",maxcountOnes(num));



	return 0;
}
