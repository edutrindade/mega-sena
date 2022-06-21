#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);

void CreateCard(int m[5][12])
{
    int aux = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            m[i][j] = aux;
            aux++;
        }
    }
}

void ShowCard(int m[5][12])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (m[i][j] < 10)
                cout << "0" << m[i][j] << "\t";
            else
                cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

int PrintMainMenu()
{
    int option;
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    system("cls");
    cout << "\n\t\t\t\t********************************\n";
    cout << "\t\t\t\t*          MEGA-SENA           *\n";
    cout << "\t\t\t\t*                              *\n";
    cout << "\t\t\t\t* 1. Criar aposta              *\n";
    cout << "\t\t\t\t* 2. Gerar aposta aleatória    *\n";
    cout << "\t\t\t\t* 3. Conferir resutlado        *\n";
    cout << "\t\t\t\t* 4. Sair                      *\n";
    cout << "\t\t\t\t*                              *\n";
    cout << "\t\t\t\t********************************\n";
    SetConsoleTextAttribute(colors, 15);
    cout << "\t\t\t\tEscolha uma opção: ";
    cin >> option;
    return option;
}

int PrintSecondaryMenu()
{
    int option;
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    system("cls");
    cout << "\n\t\t\t\t********************************\n";
    cout << "\t\t\t\t*            APOSTA            *\n";
    cout << "\t\t\t\t*                              *\n";
    cout << "\t\t\t\t* 1. 06 dezenas                *\n";
    cout << "\t\t\t\t* 2. 07 dezenas                *\n";
    cout << "\t\t\t\t* 3. 08 dezenas                *\n";
    cout << "\t\t\t\t* 4. Voltar                    *\n";
    cout << "\t\t\t\t*                              *\n";
    cout << "\t\t\t\t********************************\n";
    cout << "\t\t\t\tEscolha uma opção: ";
    cin >> option;
    return option;
}

void BetScreen(int amount, int cardUser[])
{
    cout << amount;
}