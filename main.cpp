#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // NELEMENTS nem N_ELEMENTS-ként van írva
    std::cout << '1-100 ertekek duplazasa' // Nincs ; lezárás a kódsor végén + '' van használva "" helyett 
    for (int i = 0;) //Hiányos for-ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"  // Nincs ; lezárás a kódsor végén + a kiíratásnál kell egy b[i]
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // inicializálni kell 0 értékkel az atlag valtozot
    for (int i = 0; i < N_ELEMENTS, i++) // for ciklus 2. elem végén , van ; helyett
    {
        atlag += b[i] // Nincs ; lezárás a kódsor végén.
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;  
    return 0;   //hiányzik a memóriafelszabadítás
}
