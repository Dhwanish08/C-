#include <iostream>
#include <ctime>

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


// String Methods

std::string name;

std::cout << "Enter your name: " << '\n';
std::getline(std::cin,name);

if (name.length() > 12){
    std::cout<<"Your name is long"<<'\n';   
}
else if (name.empty()){
    std::cout<<"You didnt enter your name";
}
else if(name.length() < 6){
    std::cout<<"Your name is short"<<'\n';
}
else{
    std::cout<<"Your name is fine"<<'\n';
}
// name.clear - clears the string
// name.append - addition at last eg: name.apend("@gmail.com")
// name.insert - instert anywhere eg : name.insert(0,"@")
// name.erase - erase anywhere to anywhere
// more on https://cplusplus.com/reference/string/string/



//While loop

std::string name;

while (name.empty()){
    std::cout<<"Enter your name: "<<'\n';
    std::getline(std::cin,name);
}

//do while loop

int number;

do{
    std::cout<<"Enter a positive number: "<<'\n';
    std::cin>>number;
}while(number < 0);

//For loop

for(int i = 10; i > 0; i--){
    std::cout<< i <<'\n';
}
std::cout << "Happy Birthday" << "\n";


//Break - break and continue - skip current

for(int i = 0; i <=20; i++){
    if(i == 13){
        continue;
    }
    else if(i == 20){
        break;
    }
    std::cout << i << '\n';
}


//Nest loop - loop in a loop

std::cout << "Enter number of rows: " << "\n";
int row;
std::cin >> row;
std::cout << "Enter number of columns: " << "\n";
int col;
std::cin >> col;
std::cout << "Enter print sign: " << "\n";
char sign;
std::cin >> sign;

for(int i = 1; i<=row; i++){
    for(int j = 1; j<= col; j++){
        std::cout << sign<< " ";
    }
    std::cout << "\n";
}
//Pseudo random - not truly random but close

    srand(time(NULL));
    int num1 = (rand() % 6) + 1; //(1-6 dice)
    int num2 = (rand() % 9) + 1; //(1-9)
    int num3 = (rand() % 12) + 1; //(1-12)
    std::cout << num1 << " " << num2 << " " << num3 << "\n";


//random event
srand(time(NULL));
int randnum = rand() % 5 + 1;

switch (randnum){
    case 1: std::cout << "You got a car!" << '\n';
    break;
    case 2: std::cout << "You got a bike!" << '\n';
    break;
    case 3: std::cout << "You got a scooter!" << '\n';
    break;
    case 4: std::cout << "You won a vacation!" << '\n';
    break;
    case 5: std::cout << "You won a million dollars!" << '\n';
    break;
    default: std::cout << "Invalid choice" << '\n';
}

*/
// Number guessing game - by myself

srand(time(NULL));

int guess;
int tries = 0;
int num = rand() % 100 + 1;

do{
    std::cout << "Guess a number from 1 - 100 \n";
    std::cin >> guess;
    tries++;

    if(guess < num){
        std::cout << "Too low" << "\n";
    }
    else if(guess > num){
        std::cout << "Too high" << "\n";
    }
    else{
        std::cout << "You win, number of ties: "<< tries << "\n";
    }
}while(guess != num && tries <=7);
std::cout <<"Oh no 7 attempts used";
return 0;
//end of day 2 
}