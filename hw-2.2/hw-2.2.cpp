#include <iostream>
#include <Windows.h>

struct bankAccount {
    int accountNmb = 0;
    std::string name;
    float deposit = 0;
};

void changeDeposit(bankAccount& account, float amount) {
    account.deposit = amount;
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    bankAccount bAccount;
    float nDeposit;
    std::cout << "Введите номер счёта: ";
    std::cin >> bAccount.accountNmb;
    std::cout << "Введите имя владельца: ";
    std::cin >> bAccount.name;
    std::cout << "Введите баланс: ";
    std::cin >> bAccount.deposit;
    std::cout << "Введите новый баланс: ";
    std::cin >> nDeposit;
    changeDeposit(bAccount, nDeposit);
    std::cout << "Ваш счёт: " << bAccount.accountNmb << ", " << bAccount.name << ", " << bAccount.deposit << "\n";
}