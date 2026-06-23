
#include <iostream>

int main()
{

    char op;
    int num1, num2;
    double result;

    std::cout << "Calculator\n";
    std::cout << "What do you want to do?\n";
    std::cout << "Enter one of (+ - * /): ";
    std::cin >> op;
	std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter secound number: ";
    std::cin >> num2;

    switch (op){
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case  '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
    default:
        std::cout << "You entered wrong operator.";
        break;
    }
}