
  Vowel.c
 
   Write C Program to if a character is vowel or not
   Created on Jan 6, 2022
       Author Youssef Zaki
 


#include stdio.h


int main()
{
	char input;

	printf(Enter an alphabet );
	fflush(stdin);fflush(stdout);
	scanf(%c, &input);
	fflush(stdin);fflush(stdout);

	if((input == 'a')  (input == 'A')  (input == 'e')  (input == 'E')  (input == 'o')  (input == 'O')  (input == 'i')  (input == 'I')  (input == 'u')  (input == 'U')){
		printf(%c is vowel,input);
		fflush(stdin);fflush(stdout);
	}
	else{
		printf(%c is consonant,input);
		fflush(stdin);fflush(stdout);
	}


	return 0;
}
