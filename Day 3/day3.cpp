#include <iostream>
#include <iomanip>
/* Functions
void happybirthday(std::string name, int age ); //declaration so no issues in main function even writing after main


int main() {

    //functions - a block of reusable code

    std::string name = "Dhwanish";
    int age = 20;
    happybirthday(name ,age /*argument/);



    return 0;
}

void happybirthday(std::string name, int age){
    std::cout << "Happy Biirthday "<< name<< "\n";
    std::cout << "Happy Biirthday to you \n";
    std::cout << "You are "<< age << " years old\n";
}


double square (double length); //double to return the value of that function call
double cube(double length);

int main(){

    //return - return a value back to to the spot
    double length,area, Volume;
    std::cout<<"Enter the length of the square: ";
    std::cin>>length;
    std::cout<<"\n";
    area = square(length);
    std::cout<<"Area: "<<area<<"\n";
    Volume = cube(length);
    std::cout << "Volume: " << Volume << "\n";
    return 0;
}

double square (double length){
    return length * length;
}
double cube (double length){
    return length * length * length;
}

using text_t = std::string;
std::string concantStrings (text_t string1, text_t string2);

int main(){

    text_t firstName = "Dhwanish";
    text_t lastName = "Desai";
    text_t fullname = concantStrings(firstName, lastName);
    std::cout <<"Hello " <<fullname << "\n";
    return 0;
}

std::string concantStrings(text_t string1, text_t string2){
    return string1 +" " + string2;
}


//Overload Functions
void bakepizza();
void bakepizza(std::string topping1);
void bakepizza(std::string topping1, std::string topping2);
int main(){
    std::string topping1 ;
    std::cout<<"Enter topping: ";
    std::getline(std::cin, topping1);
    std::string topping2 ;
    std::cout<<"Enter topping: ";
    std::getline(std::cin, topping2);
    
    bakepizza(topping1, topping2);
    

    return 0;
}
void bakepizza(){
    std::cout << "Here is your pizza\n";
}
void bakepizza(std::string topping1){
    std::cout << "Here is your pizza with " << topping1 << "\n";
}
void bakepizza(std::string topping1, std::string topping2){
    std::cout << "Here is your pizza with " << topping1 << " and " << topping2 << "\n";
}


//Local and Global variables
int mynum = 2;//global
void printnum();
int main(){
    //int mynum = 1; local to main

    printnum();

    return 0;

}

void printnum(){
    mynum = 1; //local>>global
    std::cout<< ::mynum; //:: to use global version
}
*/

//Bandking App
void showbalance(double balance);
double deposit();
double withdraw(double balance);
int main(){

    double balance = 0;
    int choice;
    do{
        std::cout << "***********************************";
        std::cout << "\nBankin App\n";
        std::cout << "1.Show Balance\n";
        std::cout << "2.Deposit\n";
        std::cout << "3.Withdraw\n";
        std::cout << "4.Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showbalance(balance);
            break;
            case 2: balance += deposit();
            showbalance(balance);
            break;
            case 3: balance -= withdraw(balance);
            showbalance(balance);
            break;
            case 4: std::cout << "Thank you for banking with us!";
            break;
            default: std::cout << "Invalid choice. Please try again.";
        }
    }
    while(choice != 4);

    return 0;
}
void showbalance(double balance){
    std::cout << "Current balance is: " << std::setprecision(2) << std::fixed << balance << "\n";
    
}
double deposit(){
    double amount;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;

    if(amount>0){
        return amount;
    }
    else{
        std::cout << "Invalid amount\n";
        return 0;
    }
}

double withdraw(double balance){
    double amount;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;
    if(amount > balance){
        std::cout << "Insufficient Balance\n";
        return 0;
    }
    else if(amount<0){
        std::cout << "Invalid amount\n";
        return 0;
    }
    else{
        return amount;
    }
}
