#include <iostream>
#include "StringPlus.h"
#include "windows.h"

int main() {

    SetConsoleOutputCP(CP_UTF8);

    std::locale::global(std::locale(""));

    // Äåìîíñòðàö³ÿ ðîáîòè ç áàçîâèì êëàñîì
    std::cout << "Ðîáîòà ç áàçîâèì êëàñîì StringBase:" << std::endl;
    StringBase baseString("Ðÿäîê âïèñàíèé õàðäêîäîì");
    std::cout << "Ðÿäîê: " << baseString.getValue() << std::endl;
    std::cout << "Äîâæèíà ðÿäêà: " << baseString.calculateLength() << std::endl;

    std::cout << "\n----------------------------------\n" << std::endl;

    // Äåìîíñòðàö³ÿ ðîáîòè ç ïîõ³äíèì êëàñîì
    std::cout << "Ðîáîòà ç ïîõ³äíèì êëàñîì StringPlus:" << std::endl;
    StringPlus plString("123-456-789");
    std::cout << "Ïî÷àòêîâèé ðÿäîê: " << plString.getValue() << std::endl;
    std::cout << "Äîâæèíà ðÿäêà: " << plString.calculateLength() << std::endl;

    // Âèäàëÿºìî äåô³ñè
    plString.removeCharacter('-');
    std::cout << "Ðÿäîê ï³ñëÿ âèäàëåííÿ '-': " << plString.getValue() << std::endl;
    std::cout << "Äîâæèíà ðÿäêà ï³ñëÿ çì³í: " << plString.calculateLength() << std::endl;

    return 0;
}
