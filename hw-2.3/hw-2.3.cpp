#include <iostream>
#include <Windows.h>

struct addressStruct {
    std::string country;
    std::string name;
    std::string street;
    int building = 0;
    int flat = 0;
    int postalCode = 0;
};

void printAddress(addressStruct address) {
    std::cout << "Страна : " << address.country << "\n";
    std::cout << "Город : " << address.name << "\n";
    std::cout << "Улица : " << address.street << "\n";
    std::cout << "Номер дома : " << address.building << "\n";
    std::cout << "Номер квартиры : " << address.flat << "\n";
    std::cout << "Индекс : " << address.postalCode << "\n";
    std::cout << "\n";
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    addressStruct address1 = { "Россия", "Москва", "Арбат", 12, 8, 123456 };
    addressStruct address2 = { "Россия", "Ижевск", "Пушкина", 59, 143, 953769 };
    printAddress(address1);
    printAddress(address2);
}