#include "StringPlus.h"

// ����������� �� �������������
StringPlus::StringPlus() : StringBase() {}

// ����������� � ����������
StringPlus::StringPlus(const std::string& str) : StringBase(str) {}

// �������� �����������
StringPlus::StringPlus(const StringPlus& other) : StringBase(other) {}

// ����� ��������� �������
void StringPlus::removeCharacter(char charToRemove) {
    size_t pos;
    while ((pos = value.find(charToRemove)) != std::string::npos) {
        value.erase(pos, 1);
    }
}
// �������������� ����� 
int StringPlus::calculateLength() const {
    return StringBase::calculateLength();
}