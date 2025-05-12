#pragma once
#include "StringBase.h"

class StringPlus : public StringBase {
public:
    // ������������
    StringPlus();
    StringPlus(const std::string& str);
    StringPlus(const StringPlus& other);

    // ������ ������ � ������
    void removeCharacter(char charToRemove);

    // �������������� �����
    int calculateLength() const override;
};