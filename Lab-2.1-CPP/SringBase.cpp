#include "StringBase.h"

// Конструктор за замовчуванням
StringBase::StringBase() : value("") {}

// Конструктор з параметром
StringBase::StringBase(const std::string& str) : value(str) {}

// Копіюючий конструктор
StringBase::StringBase(const StringBase& other) : value(other.value) {}

// Гетер для значення рядка
std::string StringBase::getValue() const {
    return value;
}

// Метод обчислення довжини
int StringBase::calculateLength() const {
    return value.length();
}