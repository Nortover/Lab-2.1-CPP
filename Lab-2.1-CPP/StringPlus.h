#pragma once
#include "StringBase.h"

class StringPlus : public StringBase {
public:
    // Конструктори
    StringPlus();
    StringPlus(const std::string& str);
    StringPlus(const StringPlus& other);

    // Методи роботи з рядком
    void removeCharacter(char charToRemove);

    // Перевизначений метод
    int calculateLength() const override;
};