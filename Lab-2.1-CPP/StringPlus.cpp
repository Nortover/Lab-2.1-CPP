#include "StringPlus.h"

// Конструктор за замовчуванням
StringPlus::StringPlus() : StringBase() {}

// Конструктор з параметром
StringPlus::StringPlus(const std::string& str) : StringBase(str) {}

// Копіюючий конструктор
StringPlus::StringPlus(const StringPlus& other) : StringBase(other) {}

// Метод видалення символу
void StringPlus::removeCharacter(char charToRemove) {
    size_t pos;
    while ((pos = value.find(charToRemove)) != std::string::npos) {
        value.erase(pos, 1);
    }
}
// Перевизначений метод 
int StringPlus::calculateLength() const {
    return StringBase::calculateLength();
}