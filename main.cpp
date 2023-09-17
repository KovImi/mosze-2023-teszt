#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // NELEMENTS kijavítva
    std::cout << "1-100 ertekek duplazasa"; // ; javítva, "" javítva
    for (int i = 0; i < N_ELEMENTS; i++) //for ciklus kiegészítve
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // for-ciklus kiegészítve
    {
        std::cout << "Ertek:" << b[i] << std::endl;  // b[i] és std::endl; hozzáadva
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // inicializálva
    for (int i = 0; i < N_ELEMENTS; i++) // , kijavítva ;-re
    {
        atlag += b[i]; // ; hozzáadva
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b;  //memóriafelszabadítás hozzáadva

    std::cout << "Ezt én adtam hozzá nem te :P"

    return 0;   
}
