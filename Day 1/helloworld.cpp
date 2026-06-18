#include <iostream>
#include <vector>

typedef std::string text_t;
using name_t = std::string;

namespace first {
  int np = 2;
}

int main() {
  // Day 1
  // Printing
  std::cout << "I am Dhwanish" << std::endl;
  std::cout << "I am from Ahmedabad" << '\n';
  // Variables
  int x;
  x = 10;
  int y = 10;
  int sum = x + y;
  std::cout << x <<" "<<y << std::endl;
  std::cout << "Sum is " << sum << std::endl;
  std::cout << x-y << "\n";

  // integer
  int age = 20;

  // float
  float price = 20.5;

  // double
  double price2 = 20.555555555555;

  // char
  char grade = 'A';

  // bool
  bool isStudent = true;

  //string
  std::string name = "Dhwanish";

  std::cout << "Hello " << name << std::endl;
  std::cout << "You are " << age << " years old"<< '\n' ;
  std::cout << "You have paid " << price << " dollars"<<'\n';
  std::cout << "You will get " << price2 << " dollars"<<'\n';
  std::cout << "Your grade is " << grade << '\n';
  std::cout << "You are a student " << isStudent << '\n';

  
  //const keyword

  const double pi = 3.14159;
  std::cout << "Value of pi is " << pi << '\n';
  const int speed_of_light = 299792458;


  //namespace 
  // using namespace first - for directly assignment of value here
  int np = 10;
  
  std::cout << np << '\n';
  std::cout << first::np << '\n';
  
  //typedef - name_t = using name_t
  name_t nickname = "Dhwanish";
  text_t text = "Hello";

  std::cout << nickname << " ";
  std::cout << text << '\n';

  //Arithmetic Operators

  //age = age + 1; age++; age--; age*=2: age/=2
  age+=1;
  std::cout << age << "\n";
  int idk = age % 2;
  std::cout << idk << std::endl;

  //type conversion

  int correct = 8;
  int questions = 10;
  double score = correct/(double)questions * 100;

  std::cout << score << "%" << '\n';

  //User input

  text_t name1;
  int age1;
  std::cout << "what is your full name?: ";
  std::getline(std::cin >> std::ws, name1); // >> std::ws to ignore other input and hite space above
  std::cout << "how old are you?: ";
  std::cin >> age1;
  std::cout << "Hello " << name1;
  std::cout << "you are " << age1 << " years old\n";

  return 0;
}