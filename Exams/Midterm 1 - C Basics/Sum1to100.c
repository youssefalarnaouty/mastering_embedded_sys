/*
 *
 *  Created on: Jan 18, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>

int sum(int l, int u){
	if (l == u)
		return l;
	return (l + sum(l+1,u));
}


int main()
{

	int lower =1,upper=100;

	printf("%d",sum(lower,upper));

	return 0;
}
