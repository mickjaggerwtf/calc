#include <stdio.h>

int a,b,sum,sub,div,mul,opn,met;
int *aptr = &a;
int *bptr = &b;
int addn(), subn(), muln(), divn();

int main() {

	printf("enter first number\n");
	scanf ("%d", &a);
	printf("second number\n");
	scanf("%d", &b);
	printf("what method do you want to use?\n1 - library function\n2 - user defined function\n3 - pointer\n");
	scanf("%d", &met);
	printf("what operation do you want to perform?\n1 - add\n2 - subtract\n3 - multiply\n4 - divide\n");
	scanf("%d", &opn);

	switch (met) {

		case 1: {
			switch (opn) {

				case 1: {
					sum = a + b;
					printf("sum is %d\n", sum);
					break;
				}

				case 2: {
					sub = a - b;
					printf("subtraction is %d\n", sub);
					break;
				}

				case 3: {
					mul = a * b;
					printf("multiplication is %d\n", mul);
					break;
				}

				case 4: {
					div = a / b;
					printf("division is %d\n", div);
					break;
				}
				default: {
					printf("please enter valid argument.\n");
				}

			}
			break;
		}

		case 2: {

			switch (opn) {

			case 1: {
				addn(a,b);
				break;
			}
			
			case 2: {

				subn(a,b);
				break;
			}

			case 3:	{

				muln(a,b);
				break;
			}

			case 4: {

			divn(a,b);
			break;
			}

			default:
				printf("enter valid argument.\n");
				return 0;
			}
			break;
		}


		case 3: {

			if (opn == 1) {

				int addnptr = *aptr + *bptr;
				printf("sum is %d\n", addnptr);
				return 0;
			}

			else if (opn == 2) {

				int subnptr = *aptr - *bptr;
				printf("subtraction is %d\n", subnptr);
				return 0;
			}

			else if (opn == 3) {

				int mulnptr = *aptr * *bptr;
				printf("multiplication is %d\n", mulnptr);
				return 0;
			}

			else if (opn == 4) {

				int divnptr = *aptr / *bptr;
				printf("divison is %d\n", divnptr);
				return 0;
			}

		}

		default: {

			printf("enter valid argument.\n");
		}
	return 0;
	}
}

	

int addn(int a, int b) {

	int sum1 = a + b;
	printf("sum is %d\n", sum1);
	return 0;
}


int subn(int a, int b) {

	int sub1 = a - b;
	printf("subtration is %d\n", sub1);
	return 0;
}
			

int muln(int a, int b) {

	int mul1 = a * b;
	printf("multiplication is %d\n", mul1);
	return 0;
}
			

int divn(int a, int b) {

	int div1 = a / b;
	printf("division is %d\n", div1);
	return 0;
}