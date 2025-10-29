#include <iostream>
#include <iomanip>

int main () {
// Declaration of variables
    double bill = 0.0;
    double percentage = 0.0;
    int number_of_people = 1;

// This line ensure the output values will be in fixed-point-notation with 2 decimals
    std::cout << std::fixed << std::setprecision(2);

//Taking input from the user
    std::cout << "This is the Tip Calculator" << std::endl;
    std::cout << "Please enter the total bill amount: ";
    std::cin >> bill;
    std::cout << "Please enter the tip percentage: ";
    std::cin >> percentage;
    std::cout << "How many people is splitting the bill?";
    std::cin >> number_of_people;

//Ensuring "number_of_people" would not be <= 0 (preventing division by zero)
    if (number_of_people <= 0){
        std::cout << "Invalid number of people!!!" << std::endl;
        std::cout << "Don't worry I will default it to 1" << std::endl;
        number_of_people = 1;
    }

//Calculations
    double tip = bill * (percentage/ 100.0);
    double total = bill + tip;
    double amount_per_person = total/number_of_people;

//Results
    std::cout << "\n--- Your Bill ---" << std::endl;
    std::cout << "Bill Amount: " << bill << std::endl;
    std::cout << "Tip(" << percentage << "%): " << tip << std::endl; 
    std::cout << "--------------------" << std::endl;
    std::cout << "Total Amount: " << total << std::endl;

//Shows "Amount per person" only if bill is split
    if(number_of_people > 1){
        std::cout << "Amount per person: " << amount_per_person << std::endl;

    }

    std::cout << "--------------------" << std::endl;

    return 0;
}







    

