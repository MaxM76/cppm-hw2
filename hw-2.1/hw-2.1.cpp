#include <iostream>

int main()
{
    int mn = 0;
    enum class months {
        january = 1,
        february,
        march,
        april,
        may,
        june,
        july,
        august,
        september,
        october,
        november,
        december
    };

    setlocale(LC_ALL, "Russian");
    while (true) {
        std::cout << "Введите номер месяца: ";
        std::cin >> mn;
        if (mn == 0) {
            break;
        }
        if ((mn < 0) || (mn > 12)) {
            std::cout << "Неправильный номер!\n";
            continue;
        }
        months answer = static_cast<months>(mn);
        switch (answer) {
        case months::january:
            std::cout << "Январь\n";
            break;
        case months::february:
            std::cout << "Февраль\n";
            break;
        case months::march:
            std::cout << "Март\n";
            break;
        case months::april:
            std::cout << "Апрель\n";
            break;
        case months::may:
            std::cout << "Май\n";
            break;
        case months::june:
            std::cout << "Июнь\n";
            break;
        case months::july:
            std::cout << "Июль\n";
            break;
        case months::august:
            std::cout << "Август\n";
            break;
        case months::september:
            std::cout << "Сентябрь\n";
            break;
        case months::october:
            std::cout << "Октябрь\n";
            break;
        case months::november:
            std::cout << "Ноябрь\n";
            break;
        case months::december:
            std::cout << "Декабрь\n";
            break;
        }
    }
    std::cout << "До свидания!\n";
}