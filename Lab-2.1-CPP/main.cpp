#include <iostream>
#include "StringPlus.h"
#include "windows.h"

int main() {

    SetConsoleOutputCP(CP_UTF8);

    std::locale::global(std::locale(""));

    // ������������ ������ � ������� ������
    std::cout << "������ � ������� ������ StringBase:" << std::endl;
    StringBase baseString("����� �������� ���������");
    std::cout << "�����: " << baseString.getValue() << std::endl;
    std::cout << "������� �����: " << baseString.calculateLength() << std::endl;

    std::cout << "\n----------------------------------\n" << std::endl;

    // ������������ ������ � �������� ������
    std::cout << "������ � �������� ������ NumericString:" << std::endl;
    StringPlus plString("123-456-789");
    std::cout << "���������� �����: " << plString.getValue() << std::endl;
    std::cout << "������� �����: " << plString.calculateLength() << std::endl;

    // ��������� ������
    plString.removeCharacter('-');
    std::cout << "����� ���� ��������� '-': " << plString.getValue() << std::endl;
    std::cout << "������� ����� ���� ���: " << plString.calculateLength() << std::endl;

    return 0;
}