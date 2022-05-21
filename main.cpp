#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char key, buff[24];
    int selOption = 0;

    cout << "-> Milimetri\nCentimetri\nMetri";
    while (key != 0x1B)
    {
        if (key == 0x73)
        {
            switch (selOption)
            {
                case 0:
                    selOption++;
                    #ifdef linux
                        system("clear");
                    #elif _WIN32
                        system("cls");
                    #endif
                    cout << "Milimetri\n-> Centimetri\nMetri";
                    break;

                case 1:
                    selOption++;
                    #ifdef linux
                        system("clear");
                    #elif _WIN32
                        system("cls");
                    #endif
                    cout << "Milimetri\nCentimetri\n-> Metri";
                    break;
            }
        }

        else if (key == 0x77)
        {
            switch (selOption)
            {
                case 2:
                    selOption--;
                    #ifdef linux
                        system("clear");
                    #elif _WIN32
                        system("cls");
                    #endif
                    cout << "Milimetri\n-> Centimetri\nMetri";
                    break;

                case 1:
                    selOption--;
                    #ifdef linux
                        system("clear");
                    #elif _WIN32
                        system("cls");
                    #endif
                    cout << "-> Milimetri\nCentimetri\nMetri";
                    break;
            }
        }

        else if (key == 0xA)
        {
            key = 7;
            cout << key;

            switch (selOption)
            {
                case 0:
                    cout << "\n\nMilimetri";
                    break;

                case 1:
                    cout << "\n\nCentimetri";
                    break;

                case 2:
                    cout << "\n\nMetri";
                    break;
            }
        }

        key = getch();
    }

    return 0;
}
