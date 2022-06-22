#include <iostream>
#include <windows.h>
#include <time.h>
#include "header.hpp"

using namespace std;

int option, option2, option3, amount, hits, Card[5][12], CardUser[8], Result[6];
bool bet = false;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    srand(time(NULL));
    SetConsoleTextAttribute(colors, 15);
    CreateCard(Card);

    do
    {
        option = PrintMainMenu();
        switch (option)
        {
        case 1:
            do
            {
                option2 = PrintSecondaryMenu();
                if (option2 == 1)
                {
                    system("cls");
                    amount = 6;
                    ShowCard(Card);
                    if (BetScreen(amount, CardUser))
                    {
                        cout << "\nAposta salva com sucesso!\n\n";
                        system("pause");
                        bet = true;
                        main();
                    }
                }
                else if (option2 == 2)
                {
                    system("cls");
                    amount = 7;
                    ShowCard(Card);
                    if (BetScreen(amount, CardUser))
                    {
                        cout << "\nAposta salva com sucesso!\n\n";
                        system("pause");
                        bet = true;
                        main();
                    }
                }
                else if (option2 == 3)
                {
                    system("cls");
                    amount = 8;
                    ShowCard(Card);
                    if (BetScreen(amount, CardUser))
                    {
                        cout << "\nAposta salva com sucesso!\n\n";
                        system("pause");
                        bet = true;
                        main();
                    }
                }
                else if (option2 == 4)
                {
                    main();
                }
                else
                {
                    cout << "Opção inválida!" << endl;
                    Sleep(1000);
                }
            } while (option2 < 1 || option2 > 4);
            bet = true;
            break;
        case 2:
            do
            {
                option3 = PrintSecondaryMenu();
                if (option3 == 1)
                {
                    system("cls");
                    amount = 6;
                    ShowCard(Card);
                    if (RandomScreen(amount, CardUser))
                    {
                        cout << endl << endl;
                        system("pause");
                        bet = true;
                        main();
                    }
                }
                else if (option3 == 2)
                {
                    system("cls");
                    amount = 7;
                    ShowCard(Card);
                    if (RandomScreen(amount, CardUser))
                    {
                        cout << endl << endl;
                        system("pause");
                        bet = true;
                        main();
                    }
                }
                else if (option3 == 3)
                {
                    system("cls");
                    amount = 8;
                    ShowCard(Card);
                    if (RandomScreen(amount, CardUser))
                    {
                        cout << endl << endl;
                        system("pause");
                        bet = true;
                        main();
                    }
                }
                else if (option3 == 4)
                {
                    main();
                }
                else
                {
                    cout << "Opção inválida!" << endl;
                    Sleep(1000);
                }
            } while (option3 < 1 || option3 > 4);
            break;
        case 3:
            if (bet)
            {
                system("cls");
                cout << "\t\t\t\t\t MEGA-SENA\n\n";
                cout << "\t\t\t\t\t RESULTADO\n\n";
                cout << "Seu bilhete: ";
                for (int i = 0; i < amount; i++)
                {
                    cout << CardUser[i] << " ";
                }
                GenerateResult(Result);
                cout << "\n\nSorteando as 06 dezenas: ";
                for (int i = 0; i < 6; i++)
                {
                    cout << Result[i] << " ";
                    Sleep(500);
                }
                cout << endl;
                hits = CompareResult(Result, CardUser);
                if (hits == 6)
                {
                    cout << "\n\nParabéns, você ganhou!" << endl;
                }
                else if (hits == 5) {
                    cout << "\n\nVocê acertou a Quina!" << endl;
                }
                else if (hits == 4) {
                    cout << "\n\nVocê acertou a Quadra!" << endl;
                }
                else if (hits == 3) {
                    cout << "\n\nVocê acertou 03 números!" << endl;
                }
                else if (hits == 2) {
                    cout << "\n\nVocê acertou 02 números!" << endl;
                }
                else if (hits == 1) {
                    cout << "\n\nVocê acertou apenas 01 número!" << endl;
                }
                else
                {
                    cout << "\n\nInfelizmente, você não acertou um número sequer!" << endl;
                }
                cout << "\n\nObrigado por jogar! Vamos retornar para o Menu Principal...\n\n";
            }
            else
            {
                cout << "Você não apostou nada!" << endl;
                Sleep(1000);
                main();
            }
            system("pause");
            main();
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