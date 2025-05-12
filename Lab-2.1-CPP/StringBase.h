#pragma once


#include <string>

class StringBase {
protected:
    std::string value;

public:
    // Конструктори
    StringBase();
    StringBase(const std::string& str);
    StringBase(const StringBase& other);

    // Гетер
    std::string getValue() const;

    // Метод обчислення довжини
    virtual int calculateLength() const;
};

