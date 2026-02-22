#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
            //NELEMENTS helytelen név, helyesen N_ELEMENTS
    int* b = new int[N_ELEMENTS];

            //hiányzó pontosvesszõ
    std::cout << "1-100 ertekek duplazasa" << std::endl;

            //hibás for ciklus fejléc
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }

            //hibás ciklusfeltétel (i)
    for (int i = 0; i < N_ELEMENTS; i++)
    {
            // hiányzó kiírási rész és pontosvesszõ
        std::cout << "Ertek: " << b[i] << std::endl;
    }

    std::cout << "Atlag szamitasa: " << std::endl;

            //nincs inicializálva
    int atlag = 0;

            //vesszõ a feltételben
    for (int i = 0; i < N_ELEMENTS; i++)
    {
            //hiányzó pontosvesszõ
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

         //hiányzó delete[]
    delete[] b;

    return 0;
}