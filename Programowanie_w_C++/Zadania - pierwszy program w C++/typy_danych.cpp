#include <iostream>

int main() {
    int calkowita = 10;
    float zmiennoprzecinkowa = 3.14;
    char znakowa = 'A';
    bool logiczna = true;

    std::cout << "Zmienna calkowita: " << calkowita << std::endl;
    std::cout << "Zmienna zmiennoprzecinkowa: " << zmiennoprzecinkowa << std::endl;
    std::cout << "Zmienna znakowa: " << znakowa << std::endl;
    std::cout << "Zmienna logiczna: " << std::boolalpha << logiczna << std::endl;

    return 0;
}