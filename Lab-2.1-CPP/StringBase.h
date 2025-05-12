#pragma once


#include <string>

class StringBase {
protected:
    std::string value;

public:
    // ������������
    StringBase();
    StringBase(const std::string& str);
    StringBase(const StringBase& other);

    // �����
    std::string getValue() const;

    // ����� ���������� �������
    virtual int calculateLength() const;
};

