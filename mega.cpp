#include <iostream>
#include <windows.h>
#include <time.h>
#include "header.hpp"

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    srand(time(NULL));
    SetConsoleTextAttribute(colors, 15);
    int option, Card[5][12], CardUser[6];

    CreateCard(Card);

    do
    {
        option = PrintMainMenu();
        switch (option)
        {
        case 1:
            option = PrintSecondaryMenu();
            if (option == 1)
            {
                system("cls");
                ShowCard(Card);
                BetScreen(6, CardUser);
            }
            else if (option == 2)
            {
                system("cls");
                ShowCard(Card);
                BetScreen(7, CardUser);
            }
            else if (option == 3)
            {
                system("cls");
                ShowCard(Card);
                BetScreen(8, CardUser);
            }
            else if (option == 4)
            {
                cout << "Voltando..." << endl;
            }
            else
            {
                cout << "Opção inválida!" << endl;
            }
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            cout << "Saindo..." << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
            break;
        }
    } while (option < 1 || option > 4);
    cout << endl;
    return 0;
}