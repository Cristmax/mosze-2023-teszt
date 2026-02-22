#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
            //NELEMENTS helytelen n�v, helyesen N_ELEMENTS
    int* b = new int[N_ELEMENTS];

            //hi�nyz� pontosvessz�
    std::cout << "1-100 ertekek duplazasa" << std::endl;

            //hib�s for ciklus fejl�c
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }

            //hib�s ciklusfelt�tel (i)
    for (int i = 0; i < N_ELEMENTS; i++)
    {
            // hi�nyz� ki�r�si r�sz �s pontosvessz�
        std::cout << "Ertek: " << b[i] << std::endl;
    }

    std::cout << "Atlag szamitasa: " << std::endl;

            //nincs inicializ�lva
    int atlag = 0;

            //vessz� a felt�telben
    for (int i = 0; i < N_ELEMENTS; i++)
    {
            //hi�nyz� pontosvessz�
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

         //hi�nyz� delete[]
    delete[] b;

        std::cout << "uj branch!" << std::endl;

return 0;
}