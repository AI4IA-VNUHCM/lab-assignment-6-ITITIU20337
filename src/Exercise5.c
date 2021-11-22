/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void Ex5(char *str){
	int test = 0;	
	for (int i = 0; i < strlen(str)/2; i++)
	{
		int char1 = str[i];
		int char2 = str[strlen(str) - i - 1];
		if (char1 != char2-2 && str[i] != '(')
			test = 1;
		if (str[i] == '(' && char1 != char2 - 1)
			test = 1;
	}
	if (test == 1)
		printf("Invalid!");
	else
		printf("Valid!");
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
