#include <iostream>

/*
//Memory address
int main() {

    // memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    std::string name = "Dhwanish";
    int age  = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}

//Pass by value and passy by reference (&)

void swap(std::string &x, std::string &y);

int main()
{
	std::string x = "Kool-Aid";
	std::string y = "Water";

	swap(x, y);

	std::cout << "X: " << x << '\n';
	std::cout << "Y: " << y << '\n';

    return 0;
}
void swap(std::string &x, std::string &y){
	std::string temp;
	temp = x;
	x = y;
	y = temp;
} 

//const Parameter
void printInfo(const std::string &name, const int &age);
int main()
{
    // const parameter = parameter that is effectively read-only
    //                                  conveys intent & code is more secure
    //                                  useful for pointers and references
 
    std::string name = "Bro";
    int age = 21;
 
    printInfo(name, age);
 
    return 0;
}
void printInfo(const std::string &name, const int &age){
    //name = "";
    //age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}
*/
//credit card number real or fake app

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter Credit Card Number : ";
    std::cin >> cardNumber;
    
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    
    if(result % 10 == 0){
        std::cout << "Valid";
    }
    else{
        std::cout << "Invalid";
    }
    return 0;
}
int getDigit(const int number){
    return number % 10 + (number/10 % 10);
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >=0; i--){
        sum += getDigit(cardNumber[i] - '0');
    }
    return sum;
}
int sumEvenDigits(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 2; i >=0; i--){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}
