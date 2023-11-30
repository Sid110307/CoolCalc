#include <iostream>
#include <string>
#include <cmath>
#include <chrono>

double performOperation(double operand1, double operand2, char op)
{
	switch (op)
	{
	case '+':
		return operand1 + operand2;
	case '-':
		return operand1 - operand2;
	case '*':
		return operand1 * operand2;
	case '/':
		if (operand2 == 0) throw std::invalid_argument("Dividing by zero.");
		return operand1 / operand2;
	case '^':
		return std::pow(operand1, operand2);
	default:
		throw std::invalid_argument("Invalid operator.");
	}
}

int main()
{
	std::cout << "CoolCalc: Your Cool Calculation Program!" << std::endl;
	double operand1, operand2;
	char op;

	std::cout << "Enter first operand: ";
	std::cin >> operand1;

	std::cout << "Enter operator (+, -, *, /, ^): ";
	std::cin >> op;

	std::cout << "Enter second operand: ";
	std::cin >> operand2;

	auto start = std::chrono::high_resolution_clock::now();

	try
	{
		std::cout << "Result: " << performOperation(operand1, operand2, op) << std::endl;
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	auto end = std::chrono::high_resolution_clock::now();
	std::cout << "Time taken: " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << " ms" << std::endl;

	return EXIT_SUCCESS;
}
