/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
        int a=n/1000;
        if(n>=1000){
        switch (a)
        {
        case 1:
            printf("one");
            n-=1000;
            break;
        case 2:
            printf("two");
            n-=2000;
            break;
        case 3:
            printf("three");
            n-=3000;
            break;
        case 4:
            printf("four");
            n-=4000;
            break;
        case 5:
            printf("five");
            n-=5000;
            break;
        case 6:
            printf("six");
            n-=6000;
            break;
        case 7:
            printf("seven");
            n-=7000;
            break;
        case 8:
            printf("eight");
            n-=8000;
            break;
        case 9:
            printf("nine");
            n-=9000;
            break;
        }
        printf(" thousand ");
        }

        if(n>=100){
        
        int b=n/100;
        switch (b)
        {
        case 1:
            printf("one");
            n-=100;
            break;
        case 2:
            printf("two");
            n-=200;
            break;
        case 3:
            printf("three");
            n-=300;
            break;
        case 4:
            printf("four");
            n-=400;
            break;
        case 5:
            printf("five");
            n-=500;
            break;
        case 6:
            printf("six"); 
            n-=600;
            break;
        case 7:
            printf("seven");
            n-=700;
            break;
        case 8:
            printf("eight");
            n-=800;
            break;
        case 9:
            printf("nine");
            n-=900;
            break;
        }
        printf(" hundred");
        printf(" ");
        }
        if(n>=10){
        int d=n/10;
        switch (d)
        {
        case 1:
            if (n==10){
            printf("ten");}
            else if (n==11)
            printf("eleven");
            else if (n==12)
            printf("twelve");
            else if (n==13)
            printf("thirdteen");
            else if (n==14)
            printf("fourteen");
            else if (n==15)
            printf("fifteen");
            else if (n==16)
            printf("sixteen");
            else if (n==17)
            printf("seventeen");
            else if (n==18)
            printf("eighteen");
            else if (n==19)
            printf("nineteen");
            break;
        case 2:
            printf("twenty");
            n-=20;
            break;
        case 3:
            printf("thirty");
            n-=30;
            break;
        case 4:
            printf("forty");
            n-=40;
            break;
        case 5:
            printf("fifty");
            n-=50;
            break;
        case 6:
            printf("sixty");
            n-=60;
            break;
        case 7:
            printf("seventy");
            n-=70;
            break;
        case 8:
            printf("eighty");
            n-=80;
            break;
        case 9:
            printf("ninety");
            n-=90;
            break;
        }
        }
        if (n>0){
        int f=n;
        printf(" ");
        switch (f)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six"); 
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        }
        }
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
