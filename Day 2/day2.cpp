#include <iostream>

int main(){

 /*   //if and else

    int age;
    std::cout << "Enter your age: " << '\n';
    std::cin >> age;
    
    if(age >=18) {
        std::cout << "You are an adult\n";
    }
    else if (age < 0){
        std::cout << "Invalid age\n";
    }

    else {
        std::cout << "You are a minor\n";
    }
*
    //switch

    int month;
    std::cout << "Enter month number: " << '\n';
    std::cin >> month;
    switch(month){
        case 1: std::cout << "January" << '\n';
        break;
        case 2: std::cout << "February" << '\n';
        break;
        case 3: std::cout << "March" << '\n';
        break;
        case 4: std::cout << "April" << '\n';
        break;
        case 5: std::cout << "May" << '\n';
        break;
        case 6: std::cout << "June" << '\n';
        break;
        case 7: std::cout << "July" << '\n';
        break;
        case 8: std::cout << "August" << '\n';
        break;
        case 9: std::cout << "September" << '\n';
        break;
        case 10: std::cout << "October" << '\n';
        break;
        case 11: std::cout << "November" << '\n';
        break;
        case 12: std::cout << "December" << '\n';
        break;
        default: std::cout << "Invalid month" << '\n';
    }
*

    // Calc app

    std::cout << "*******************CALCULATOR*******************"<<"\n";
    double num1, num2, result;
    char op;
    
    std::cout << "Enter number 1: " << "\n";
    std::cin >> num1;
    std::cout << "Enter number 2: " << "\n";
    std::cin >> num2;
    std::cout << "Enter operator (+,-,/,*): " << "\n";
    std::cin >> op;
    

    switch(op){
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        result = num1 / num2;
        break;
        default:
        std::cout << "Invalid operator" << '\n';
        break;
    }
    
    std::cout << "Result: " << result << '\n';
    std::cout << "**************************************"<<'\n';
*/

    // Telenary operator ? and logical operators

    int age = 15;
    std::cout << (age >=18 ? "Adult" : "Minor") << '\n';

    int temp;
    std::cout << "Enter temperature: " << '\n';
    std::cin >> temp;

    if(temp >= 40){
        std::cout << "Hot" << '\n';
    }
    else if(temp >= 25 && temp < 40){
        std::cout << "Warm" << '\n';
    }
    else if(temp >= 15 && temp < 25){
        std::cout << "Cold" << '\n';
    }
    else{
        std::cout << "Very Cold" << '\n';
    }

    return 0;
    
}