/*
 This is a ATM application.
 By Ray, a beginner C++ Developer!
 Please feel free to fix any bugs you find
 Or even improve it!

 If you want your improvement to be implemented
 Feel free to let me know through my email:
 raymurimi13@gmail.com

 IGNORE THIS:
  Cxd = 432sDw2!kdlx
*/

#include <iostream>

double balance = 0;

void checkBalance();
double depositAmount();
double withdrawAmount();

int main()
{
    int choice;

    do
    {
        std::cout << "****************************\n";
        std::cout << "RayProductions Bank Teller 1\n";
        std::cout << "Enter one of the following: \n";
        std::cout << "****************************\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Check Balance\n";
        std::cout << "4. Exit\n";

        std::cin >> choice;

        switch (choice)
        {
        case 1:
            depositAmount();
            std::cout << "Your balance is: " << balance << std::endl;
            break;

        case 2:
            withdrawAmount();
            std::cout << "Your balance is: " << balance << std::endl;
            break;

        case 3:
            checkBalance();
            break;
        
        default:
            std::cout << "Invalid Option! \n";
            break;
        }
    } while (choice != 4);
    
    return 0;
}

void checkBalance()
{
    std::cout << "Your balance is: " << balance << std::endl;
}

double depositAmount()
{
    double deposit;

    std::cout << "How much do you wish to deposit: \n";  

    std::cin >> deposit;

    if (deposit < 0) {
        std::cout << "Invalid money! \n";
    } else {
        return balance += deposit;
    }
}

double withdrawAmount()
{
    double withdrawal;

    std::cout << "How much do you wish to withdraw: \n";  

    std::cin >> withdrawal;

    if (withdrawal < 0) {
        std::cout << "This operation is invalid!\n";
    }
    else if (withdrawal > balance) {
        std::cout << "Insufficient funds!\n";
    } else {
        return balance -= withdrawal;
    }
}
