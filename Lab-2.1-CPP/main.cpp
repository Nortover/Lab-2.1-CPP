#include <iostream>
#include "StringPlus.h"
#include "windows.h"

int main() {

    SetConsoleOutputCP(CP_UTF8);

    std::locale::global(std::locale(""));

    // Демонстрація роботи з базовим класом
    std::cout << "Робота з базовим класом StringBase:" << std::endl;
    StringBase baseString("Рядок вписаний хардкодом");
    std::cout << "Рядок: " << baseString.getValue() << std::endl;
    std::cout << "Довжина рядка: " << baseString.calculateLength() << std::endl;

    std::cout << "\n----------------------------------\n" << std::endl;

    // Демонстрація роботи з похідним класом
    std::cout << "Робота з похідним класом NumericString:" << std::endl;
    StringPlus plString("123-456-789");
    std::cout << "Початковий рядок: " << plString.getValue() << std::endl;
    std::cout << "Довжина рядка: " << plString.calculateLength() << std::endl;

    // Видаляємо дефіси
    plString.removeCharacter('-');
    std::cout << "Рядок після видалення '-': " << plString.getValue() << std::endl;
    std::cout << "Довжина рядка після змін: " << plString.calculateLength() << std::endl;

    return 0;
}