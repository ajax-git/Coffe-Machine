// includes
#include <iostream>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

// prices
double CAPUCHIN_WITH_CHOCOLATE     =   2.00;
double ESPRESSO                    =   2.50;
double SMALL_BLACK                 =   1.50;
double BIG_BLACK                   =   2.50;
double BIG_WITH_MILK               =   1.70;
double SMALL_WITH_MILK             =   1.30;
double INSTANT_COFFE               =   1.60;
double CHOCOLATE                   =   1.10;

int PrepareCoffe()
{
    for (int i = 0; i < 21; i++)
    {
        system("cls");
        cout << "Trwa przygotowywanie napoju... Wykonano: " << i * 5 << "%" << endl << endl;
        for (int z = 0; z < i;z++)
        {
            cout << (char)219;
        }
        Sleep(250);
    }

    cout << endl << endl << "Napój został przygotowany! ";

    return 0;
}

int main()
{
    cout << "              _              " << endl;
    cout << "      _ _    (_)   _ _      " << endl;
    cout << "    /'_` )   | | /'_` )(`\/')" << endl;
    cout << "   `\__,_)_  | |`\__,_)(_/\_)" << endl;
    cout << "         ( )_| |             " << endl;
    cout << "         `\___/'             " << endl << endl;
    
    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    
    setlocale(LC_CTYPE, "Polish");

    char sign; int choice; int want_sugar; double total_price; double total_coins = 0; double coin;

    SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "Automat przyjmuję monety o następujących nominałach:" << endl;
    cout << "0.10 zł, 0.20 zł, 0.50 zł, 1 zł, 2 zł, 5 zł" << endl << endl;

    SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
        
    cout << "Kawomat - menu" << endl << endl;
    cout << "1\tCappucino z czekoladą\t" << CAPUCHIN_WITH_CHOCOLATE << " zł" << endl;
    cout << "2\tEspresso\t\t" << ESPRESSO << " zł" << endl;
    cout << "3\tMała czarna\t\t" << SMALL_BLACK << " zł" << endl;
    cout << "4\tDuża czarna\t\t" << BIG_BLACK << " zł" << endl;
    cout << "5\tDuża z mlekiem\t\t" << BIG_WITH_MILK << " zł" << endl;
    cout << "6\tMała z mlekiem\t\t" << SMALL_WITH_MILK << " zł" << endl;
    cout << "7\tRozpuszczalna\t\t" << INSTANT_COFFE << " zł" << endl;
    cout << "8\tGorąca czekolada\t" << CHOCOLATE << " zł" << endl;
        
    do
    {
        cout << endl << "> Wrzuć monetę: ";
        cin >> coin;

        if (coin != 0.1 && coin != 0.2 && coin != 0.5 && coin != 1 && coin != 2 && coin != 5)
        {
            cout << "Błędny nominał. Spróbuj ponownie." << endl;
        }
        else
        {
            total_coins = total_coins + coin;
        }

        cout << "Stan konta: " << total_coins << " zł" << endl;

        cout << "\nCzy chcesz wrzucić więcej monet? [T/N] ";
        cin >> sign;

    } while (sign == 't' || sign == 'T');

    cout << endl << "> Wybór: ";
    cin >> choice;
            
    switch (choice)
    {
        case 1:
        {
            cout << "Wybrałeś Cappucino z czekoladą. Koszt: " << CAPUCHIN_WITH_CHOCOLATE << " zł" << endl << endl;

            cout << "Czy chcesz dosypać cukru? (0.10 zł/1 g) [T/N]: ";
            cin >> want_sugar;

            if (want_sugar == 't' || want_sugar == 'T')
            {
                total_price = CAPUCHIN_WITH_CHOCOLATE + 0.10;
            }
            else
            {
                total_price = CAPUCHIN_WITH_CHOCOLATE;
            }

            total_price = CAPUCHIN_WITH_CHOCOLATE;

            if (total_coins >= total_price) 
            {
                PrepareCoffe();
            }    
            else
            {
                SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
                
                cout << "Nie posiadasz wystarczająco środków w portfelu." << endl;
            }
            break;
        }
        case 2:
        {
            cout << "Wybrałeś Espresso. Koszt: " << ESPRESSO << " zł" << endl << endl;

            cout << "Czy chcesz dosypać cukru? (0.10 zł/1 g) [T/N]: ";
            cin >> want_sugar;

            if (want_sugar == 't' || want_sugar == 'T')
            {
                total_price = ESPRESSO + 0.10;
            }
            else
            {
                total_price = ESPRESSO;
            }

            total_price = ESPRESSO;

            if (total_coins >= total_price)
            {
                PrepareCoffe();
            }
            else
            {
                SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
                
                cout << "Nie posiadasz wystarczająco środków w portfelu." << endl;
            }

            break;
        }
        case 3:
        {
            cout << "Wybrałeś Małą czarną. Koszt: " << SMALL_BLACK << " zł" << endl << endl;

            cout << "Czy chcesz dosypać cukru? (0.10 zł/1 g) [T/N]: ";
            cin >> want_sugar;

            if (want_sugar == 't' || want_sugar == 'T')
            {
                total_price = SMALL_BLACK + 0.10;
            }
            else
            {
                total_price = SMALL_BLACK;
            }

            total_price = SMALL_BLACK;

            if (total_coins >= total_price)
            {
                PrepareCoffe();
            }
            else
            {
                SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
                
                cout << "Nie posiadasz wystarczająco środków w portfelu." << endl;
            }

            break;
        }
        case 4:
        {
            cout << "Wybrałeś Dużą czarną. Koszt: " << BIG_BLACK << " zł" << endl << endl;

            cout << "Czy chcesz dosypać cukru? (0.10 zł/1 g) [T/N]: ";
            cin >> want_sugar;

            if (want_sugar == 't' || want_sugar == 'T')
            {
                total_price = BIG_BLACK + 0.10;
            }
            else
            {
                total_price = BIG_BLACK;
            }

            total_price = BIG_BLACK;

            if (total_coins >= total_price)
            {
                PrepareCoffe();
            }
            else
            {
                SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
                
                cout << "Nie posiadasz wystarczająco środków w portfelu." << endl;
            }

            break;
        }
        case 5:
        {
            cout << "Wybrałeś Dużą z mlekiem. Koszt: " << BIG_WITH_MILK << " zł" << endl << endl;

            cout << "Czy chcesz dosypać cukru? (0.10 zł/1 g) [T/N]: ";
            cin >> want_sugar;

            if (want_sugar == 't' || want_sugar == 'T')
            {
                total_price = BIG_WITH_MILK + 0.10;
            }
            else
            {
                total_price = BIG_WITH_MILK;
            }

            total_price = BIG_WITH_MILK;

            if (total_coins >= total_price)
            {
                PrepareCoffe();
            }
            else
            {
                SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
                
                cout << "Nie posiadasz wystarczająco środków w portfelu." << endl;
            }

            break;
        }
        case 6:
        {
            cout << "Wybrałeś Małą z mlekiem. Koszt: " << SMALL_WITH_MILK << " zł" << endl << endl;

            cout << "Czy chcesz dosypać cukru? (0.10 zł/1 g) [T/N]: ";
            cin >> want_sugar;

            if (want_sugar == 't' || want_sugar == 'T')
            {
                total_price = SMALL_WITH_MILK + 0.10;
            }
            else
            {
                total_price = SMALL_WITH_MILK;
            }

            total_price = SMALL_WITH_MILK;

            if (total_coins >= total_price)
            {
                PrepareCoffe();
            }
            else
            {
                SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
                
                cout << "Nie posiadasz wystarczająco środków w portfelu." << endl;
            }

            break;
        }
        case 7:
        {
            cout << "Wybrałeś Rozpuszczalną. Koszt: " << INSTANT_COFFE << " zł" << endl << endl;

            cout << "Czy chcesz dosypać cukru? (0.10 zł/1 g) [T/N]: ";
            cin >> want_sugar;

            if (want_sugar == 't' || want_sugar == 'T')
            {
                total_price = INSTANT_COFFE + 0.10;
            }
            else
            {
                total_price = INSTANT_COFFE;
            }

            total_price = INSTANT_COFFE;

            if (total_coins >= total_price)
            {
                PrepareCoffe();
            }
            else
            {
                SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
                
                cout << "Nie posiadasz wystarczająco środków w portfelu." << endl;
            }

            break;
        }
        case 8:
        {
            cout << "Wybrałeś Czekoladę. Koszt: " << CHOCOLATE << " zł" << endl << endl;

            cout << "Czy chcesz dosypać cukru? (0.10 zł/1 g) [T/N]: ";
            cin >> want_sugar;

            if (want_sugar == 't' || want_sugar == 'T')
            {
                total_price = CHOCOLATE + 0.10;
            }
            else
            {
                total_price = CHOCOLATE;
            }

            total_price = CHOCOLATE;

            if (total_coins >= total_price)
            {
                PrepareCoffe();
            }
            else
            {
                SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
                
                cout << "Nie posiadasz wystarczająco środków w portfelu." << endl;
            }

            break;
        }
        default: cout << "Błędny wybór. Spróbuj ponownie." << endl;
    }

    return 0;
}
