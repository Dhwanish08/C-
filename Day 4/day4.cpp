#include <iostream>
/*
//arrays and sizeof()
int main(){

    std::string cars[4];

    cars[0] = "BMW M4";
    cars[1] = "Corvette";
    cars[2] = "Lamborghini";

    std::cout << cars[0]<< '\n';
    std::cout << cars[1]<< '\n';
    std::cout << cars[2]<< '\n';
    
    double gpa = 5;
    std::cout << sizeof(cars)/sizeof(std::string) << " bytes\n";
    //sizeof() can be used for array,int,float,double,char
    return 0;

}
 
int main(){

    std::string students[] = {"Dhwanish", "Jane", "Bob", "Alice", "Mark"};
    char grades[] = {'A', 'B','C','D','F'}
    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }

    //for each loop
    std::string students[] = {"Dhwanish", "Jane", "Bob", "Alice", "Mark"};
    
    for(std::string student : students){
        std::cout << student << '\n';
    }
    

double getTotal(double prices[], int size);
int main(){
    double prices[] = {23.10, 45.99, 78.50, 12.00};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);
    std::cout << "$" << total;
    
    return 0;
}
double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i<size; i++){
        total += prices[i];
    }
    return total;
}
//Search in an array
int searchArray(int array[], int size, int element);
int main(){

    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter number to be seached: ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index == -1){
        std::cout << "Element not found\n";
    }
    else{
        std::cout << "Element " << myNum << " is found at index " << index << '\n';
    }


    return 0;
}
int searchArray(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
        return i;
        }
    }
    return -1;
}

//Sorting an array
//Bubble sort
void sort(int array[], int size);
int main(){
    int array[] = {10,2,3,5,4,1,6,9,8,7};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element: array){
        std::cout << element << ' ';
    }

    return 0;
}

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

//fill() function

int main(){
    const int size = 99;
    std::string foods[size];
    
    fill(foods, foods + (size/3), "Pizza");
    fill(foods + (size/3), foods + (size/3)*2, "Burger");
    fill(foods + (size/3)*2, foods + size, "Pasta");

    for(std::string food: foods){
        std::cout << food << '\n';
    }

    return 0;
}
*/
//Fill with user input
int main(){
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "Enter the name of food you like or press 'q' to quit : " << i+1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }
    
    std::cout << "You like the following foods:" << '\n';
    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << '\n';
    }

    return 0;
}