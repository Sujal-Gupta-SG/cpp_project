#include <iostream>
#include <windows.h>
using namespace std;

main()
{
    int h, m, s, a, err;
    a = err = 0;

    while (err == 0)
    {
        system("cls");
        cout << "\nEnter Hours :";
        cin >> h;
        cout << "\nEnter Minutes :";
        cin >> m;
        cout << "\nEnter seconds :";
        cin >> s;
        if (h < 24 && m < 60 && s < 60)
            err++;
        else
            system("cls");
    }

    while (a == 0)
    {
        system("cls");
        cout << "\n"
             << h << " : " << m << " : " << s<<endl;
        Sleep(1000);
        s++;
        if (s > 59)
        {
            s = 0;
            m++;
        }
        if (m > 59)
        {
            m = 0;
            h++;
        }
        if (h > 24)
        {
            h = 0;
        }
    }
}
