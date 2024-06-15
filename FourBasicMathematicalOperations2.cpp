#include <iostream>
#include <cstdlib>

float Sum(float Num1, float Num2);
float Subtraction(float Num1, float Num2);
float Multiplication(float Num1, float Num2);
float Division(float Num1, float Num2);

int main()
{
	float Num1, Num2;
	char Operation;

	std::cout << "Type the first number: ";
	std::cin >> Num1;
	std::cout << "Type the second number: ";
	std::cin >> Num2;
	std::cout << "\nSelect the operation:\n + for sum\n - for subtraction\n * for multiplication\n / for division\n q or Q to quit\n\n";
	std::cin >> Operation;
	do {
		if (Operation == '+')
		{
			printf("\nSum result\n%.2f %c %.2f = %.2f\n", Num1, Operation, Num2, Sum(Num1, Num2));
			break;
		}
		else if (Operation == '-')
		{
			printf("\nSubtraction result\n%.2f %c %.2f = %.2f\n", Num1, Operation, Num2, Subtraction(Num1, Num2));
			break;
		}
		else if (Operation == '*')
		{
			printf("\nMultiplication result\n%.2f %c %.2f = %.2f\n", Num1, Operation, Num2, Multiplication(Num1, Num2));
			break;
		}
		else if (Operation == '/')
		{
			if (Num2 != 0)
			{
				printf("\nDivision result\n%.2f %c %.2f = %.2f\n", Num1, Operation, Num2, Division(Num1, Num2));
				break;
			}
			else
			{
				printf("You cannot divide by zero!\n");
				system("PAUSE");
				exit(0);
			}
		}
		else if (Operation == 'Q' || Operation == 'q')
			break;
		else
		{
			printf("Invalid operation selected!\n");

		}
	} while (true);
}

float Sum(float Num1, float Num2)
{
	return Num1 + Num2;
}

float Subtraction(float Num1, float Num2)
{
	return Num1 - Num2;
}

float Multiplication(float Num1, float Num2)
{
	return Num1 * Num2;
}

float Division(float Num1, float Num2)
{
	return Num1 / Num2;
}