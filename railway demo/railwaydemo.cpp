#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class railway
{
    int option, e = 0, f = 0, g = 0, h = 0, i[10], j[10], seats[10], option2, trainChoice1[10], seatsChoice1[10], trainChoice3[10], seatsChoice3[10], trainChoice2[10], seatsChoice2[10], n = 0, o = 0, p = 0, l = 0, waste;
    long int a[10], b[10];
    char c[10][100], d[10][100], password[20], m[10][100];
    float fare[10];

public:
    void type();
    void user2();
    void user1();
    void user3();
    void users();
    void adminLogin();
    void admin();
    void admin2add();
    void admin2delete();
    void admin2modify();
    railway();
};

railway::railway()
{
    type();
}

void railway::type()
{
    cout << "Who are you?\n "
         << "1.) Admin\n"
         << " 2.) User\n Enter option : ";
    cin >> option;
    switch (option)
    {
    case 1:
        system("cls");
        adminLogin();
        break;

    case 2:
        system("cls");
        users();
        break;

    default:
        system("cls");
        cout << "Choose again";
        type();
        break;
    }
}

void railway::adminLogin()
{
    cout << "\t\t\tWelcome to Admin Login portal\n\n";
    cout << "Enter your password:";
    cin >> password;
    if (strcmp(password, "admin") == 0)
    {
        system("cls");
        admin();
    }
    else
    {
        system("cls");
        cout << "Incorrect Password! \n Try again ";
        adminLogin();
    }
}

void railway::admin()
{
    cout << "\n\t\t\tWelcome Admin\n";
    cout << "\nSr no.      Train Number      Train Name      Departure from      hh : mm      Coach's      Seats      Last Station      Fare";
    if (h == 0)
    {
        cout << "\nThere is no Train Data in record";
    }
    else if (h != 0)
    {
        for (int k = 0; k < h; k++)
        {
            cout << "\n"
                 << k + 1 << "\t\t";
            cout << a[k] << "\t\t" << c[k] << "\t\t" << d[k] << "\t\t  " << b[k] << ":" << i[k] << "\t\t" << j[k] << "\t" << seats[k] << "\t\t" << m[k] << "\t\t" << fare[k];
        }
    }

    cout << "\n1.) Add Train Data\n"
         << "2.) Delete Train Data\n"
         << "3.) Modify Train Data\n"
         << "4.) Exit\nEnter option : ";

    cin >> option;
    switch (option)
    {
    case 1:
        system("cls");
        admin2add();
        break;

    case 2:
        system("cls");
        admin2delete();
        break;

    case 3:
        system("cls");
        admin2modify();
        break;

    case 4:
        system("cls");
        cout << "Exiting admin portal.\n";
        type();
        break;

    default:
        system("cls");
        cout << "Invalid option. Please try again.\n";
        admin();
        break;
    }
}

void railway::admin2add()
{
    cout << "\n\n\nTrain Adding portal \n";
    cout << "\n\n How many Train data you want to add : ";
    cin >> e;
    g = h;
    h = g + e;
    for (g; g < h; g++)
    {
        cout << "\nEnter " << g + 1 << " Train Number : ";
        cin >> a[g];
        cout << "\nEnter " << g + 1 << " Train Name : ";
        cin >> c[g];
        cout << "\nEnter " << g + 1 << " Train Departure from : ";
        cin >> d[g];
        cout << "\nEnter " << g + 1 << " Time\thh : ";
        cin >> b[g];
        cout << "\tmm : ";
        cin >> i[g];
        cout << "\nEnter " << g + 1 << " Train Coach's : ";
        cin >> j[g];
        cout << "\nEnter " << g + 1 << " Train Seats : ";
        cin >> seats[g];
        cout << "\nEnter " << g + 1 << " Train Last Station : ";
        cin >> m[g];
        cout << "\nEnter " << g + 1 << " Train Fare : ";
        cin >> fare[g];
        system("cls");

        cout << "\n"
             << g + 1 << " Train Data Entered Successfully\n";
    }
    system("cls");
    admin();
}

void railway::admin2delete()
{
    cout << "\t\t\tTrain Data Deleting portal \n";
    cout << "\nSr no.      Train Number      Train Name      Departure from      hh : mm      Coach's      Seats      Last Station      Fare";
    if (h == 0)
    {
        cout << "\nThere is no Train Data in record";
    }
    else if (h != 0)
    {
        for (int k = 0; k < h; k++)
        {
            cout << "\n"
                 << k + 1 << "\t\t";
            cout << a[k] << "\t\t" << c[k] << "\t\t" << d[k] << "\t\t  " << b[k] << ":" << i[k] << "\t\t" << j[k] << "\t" << seats[k] << "\t\t" << m[k] << "\t\t" << fare[k];
        }
    }

    cout << "\nYou want to "
         << "\n1. Delete Train data "
         << "\n2. Exit\n Enter option : ";
    cin >> option;
    if (option == 1)
    {

        cout << "\nWhich Train data you want to delete : ";
        cin >> l;
        cout << "\nAre you sure to delete " << l << " train Data"
             << "\n1. Yes"
             << "\n2. NO \nEnter option : ";
        cin >> option;
        if (option == 1)
        {
            if (l != 0 && l <= h)
            {
                for (int k = l - 1; k < h - 1; k++)
                {
                    a[k] = a[k + 1];
                    strcpy(c[k], c[k + 1]);
                    strcpy(d[k], d[k + 1]);
                    b[k] = b[k + 1];
                    i[k] = i[k + 1];
                    j[k] = j[k + 1];
                    seats[k] = seats[k + 1];
                    strcpy(m[k], m[k + 1]);
                    fare[k] = fare[k + 1];
                }

                h--;
                system("cls");
                cout << "\nDeleted successfully ";
                admin();
            }
            else
            {
                system("cls");
                cout << "\nInvalid Sr no.";
                admin2delete();
            }
        }
        else if (option == 2)
        {
            system("cls");
            admin();
        }
        else
        {
            system("cls");
            cout << "\nWrong option"
                 << "\tChoose again";
            admin2delete();
        }
    }
    else if (option == 2)
    {
        system("cls");
        admin();
    }
    else
    {
        system("cls");
        cout << "\nWrong option"
             << "\tChoose again";
        admin2delete();
    }
}

void railway::admin2modify()
{
    cout << "\t\t\tTrain data modifying portal \n";

    cout << "\nSr no.      Train Number      Train Name      Departure from      hh : mm      Coach's      Seats      Last Station      Fare";
    if (h == 0)
    {
        cout << "\nThere is no Train Data in record";
    }
    else if (h != 0)
    {
        for (int k = 0; k < h; k++)
        {
            cout << "\n"
                 << k + 1 << "\t\t";
            cout << a[k] << "\t\t" << c[k] << "\t\t" << d[k] << "\t\t  " << b[k] << ":" << i[k] << "\t\t" << j[k] << "\t" << seats[k] << "\t\t" << m[k] << "\t\t" << fare[k];
        }
    }

    cout << "\nWhich Train Data you want to modify : ";
    cin >> option;

    if (option >= 1 && option <= h)
    {
        cout << "\nWhat data you want to modify: \n"
             << "1. Train number\n"
             << "2. Train name\n"
             << "3. Departure station\n"
             << "4. Time\n"
             << "5. Coach's no.\n"
             << "6. Seats\n"
             << "7. Last Station\n"
             << "8. Fare\n"
             << "Enter option : ";
        cin >> option2;

        switch (option2)
        {
        case 1:
            cout << "\nEnter new Train Number: ";
            cin >> a[option - 1];
            break;

        case 2:
            cout << "\nEnter new Train Name: ";
            cin >> c[option - 1];
            break;

        case 3:
            cout << "\nEnter new Departure Station: ";
            cin >> d[option - 1];
            break;

        case 4:
            cout << "\nEnter new Time (hh mm): ";
            cin >> b[option - 1];
            cout << ":";
            cin >> i[option - 1];
            break;

        case 5:
            cout << "\nEnter new Coach's: ";
            cin >> j[option - 1];
            break;

        case 6:
            cout << "\nEnter new Seats: ";
            cin >> seats[option - 1];
            break;

        case 7:
            cout << "\nEnter new Last Station: ";
            cin >> m[option - 1];
            break;

        case 8:
            cout << "\nEnter new Fare: ";
            cin >> fare[option - 1];
            break;

        default:
            cout << "\nInvalid option. Please try again.\n";
            admin2modify();
            break;
        }
        system("cls");
        cout << "\nModified successfully ";
        admin();
    }
    else
    {
        system("cls");
        cout << "\nInvalid Sr no.";
        admin2modify();
    }
}

void railway::users()
{
    cout << "\t\t\tWelcome to users portal";
    cout << "\n\nSelect User "
         << "\n1. User 1"
         << "\n2. User 2"
         << "\n3. User 3"
         << "\n4. Exit"
         << "\nEnter option : ";
    cin >> option;

    switch (option)
    {
    case 1:
        system("cls");
        user1();
        break;
    case 2:
        system("cls");
        user2();
        break;
    case 3:
        system("cls");
        user3();
        break;
    case 4:
        system("cls");
        type();
        break;
    default:
        system("cls");
        cout << "\nInvalid option. Please try again.\n";
        users();
        break;
    }
}

void railway::user1()
{
user1option:
    cout << "\n\t\t\tWelcome User1\n";

    cout << "\nSr no.      Train Number      Train Name      Departure from      hh : mm      Coach's      Seats      Last Station      Fare";
    if (h == 0)
    {
        cout << "\nThere is no Train Data in record";
    }
    else if (h != 0)
    {
        for (int k = 0; k < h; k++)
        {
            cout << "\n"
                 << k + 1 << "\t\t";
            cout << a[k] << "\t\t" << c[k] << "\t\t" << d[k] << "\t\t  " << b[k] << ":" << i[k] << "\t\t" << j[k] << "\t" << seats[k] << "\t\t" << m[k] << "\t\t" << fare[k];
        }
    }

    cout << "\nSelect option "
         << "\n1. Booking"
         << "\n2. Cancellation"
         << "\n3. Current tickets"
         << "\n4. Exit"
         << "\nEnter option : ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Select a train: ";
        cin >> trainChoice1[n];

        if (trainChoice1[n] >= 1 && trainChoice1[n] <= h)
        {
            cout << "Available Seats: " << seats[trainChoice1[n] - 1] << "\n";
            cout << "How many seats do you want to book? ";
            cin >> seatsChoice1[n];

            if (seatsChoice1[n] <= seats[trainChoice1[n] - 1])
            {

                cout << "Booking " << seatsChoice1[n] << " seats for " << c[trainChoice1[n] - 1] << "\n";
                seats[trainChoice1[n] - 1] -= seatsChoice1[n];
                system("cls");
                cout << "Booked successfully";
                n++;

                goto user1option;
            }
            else
            {
                system("cls");
                cout << "Not enough seats available. Booking failed.\n";
                return;
            }
        }
        else
        {
            system("cls");
            cout << "Invalid train choice.\n";
            return;
        }
        break;
    case 2:
        cout << "Enter the train sr no. from which you want to cancel tickets: ";
        cin >> o;

        if (o >= 1 && o <= h)
        {
            cout << "Enter how many seats you want to cancel: ";
            cin >> p;

            cout << "Cancelling " << p << " seats from " << c[o - 1] << "\n";
            seats[o - 1] += p;
            system("cls");
            cout << "cancelled successfully";
            goto user1option;
        }
        else
        {
            system("cls");
            cout << "Invalid sr no.. Cancellation failed.\n";
            goto user1option;
            return;
        }
        break;
    case 3:

        while (waste != 1)
        {
            system("cls");
            cout << "\t\t\tYour current bookings:\n";
            cout << "\nSr no.      Train Number      Train Name      Departure from      hh : mm      Coach's      Seats      Last Station      Fare";
            if (h == 0)
            {
                cout << "\nThere is no Train Data in record";
            }
            else if (h != 0)
            {
                for (int k = 0; k < h; k++)
                {
                    cout << "\n"
                         << k + 1 << "\t\t";
                    cout << a[k] << "\t\t" << c[k] << "\t\t" << d[k] << "\t\t  " << b[k] << ":" << i[k] << "\t\t" << j[k] << "\t" << seats[k] << "\t\t" << m[k] << "\t\t" << fare[k];
                }
            }

            cout << "\n\t\t\tBooked Trains"
                 << "\n sr no.       Seats";

            if (n == 0)
            {
                system("cls");
                cout << "\nThere is no Train booked in record";
                goto user1option;
            }
            else if (n != 0)
            {
                for (int k = 0; k < n; k++)
                {
                    cout << "\n  "
                         << trainChoice1[k] << "\t\t" << seatsChoice1[k];
                }
            }
            cout << "\nData printed successfully\n press 1 to go back  ";
            cin >> waste;
            system("cls");
        }
        goto user1option;

        break;
    case 4:
        system("cls");
        users();
        break;
    default:
        system("cls");
        cout << "\nInvalid option. Please try again.\n";
        user1();
        break;
    }
}

void railway::user2()
{
user2option:
    cout << "\n\t\t\tWelcome User2\n";

    cout << "\nSr no.      Train Number      Train Name      Departure from      hh : mm      Coach's      Seats      Last Station      Fare";
    if (h == 0)
    {
        cout << "\nThere is no Train Data in record";
    }
    else if (h != 0)
    {
        for (int k = 0; k < h; k++)
        {
            cout << "\n"
                 << k + 1 << "\t\t";
            cout << a[k] << "\t\t" << c[k] << "\t\t" << d[k] << "\t\t  " << b[k] << ":" << i[k] << "\t\t" << j[k] << "\t" << seats[k] << "\t\t" << m[k] << "\t\t" << fare[k];
        }
    }

    cout << "\nSelect option "
         << "\n1. Booking"
         << "\n2. Cancellation"
         << "\n3. Current tickets"
         << "\n4. Exit"
         << "\nEnter option : ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Select a train: ";
        cin >> trainChoice2[n];

        if (trainChoice2[n] >= 1 && trainChoice2[n] <= h)
        {
            cout << "Available Seats: " << seats[trainChoice2[n] - 1] << "\n";
            cout << "How many seats do you want to book? ";
            cin >> seatsChoice2[n];

            if (seatsChoice2[n] <= seats[trainChoice2[n] - 1])
            {

                cout << "Booking " << seatsChoice2[n] << " seats for " << c[trainChoice2[n] - 1] << "\n";
                seats[trainChoice2[n] - 1] -= seatsChoice2[n];
                system("cls");
                cout << "Booked successfully";
                n++;
                goto user2option;
            }
            else
            {
                system("cls");
                cout << "Not enough seats available. Booking failed.\n";
                return;
            }
        }
        else
        {
            system("cls");
            cout << "Invalid train choice.\n";
            return;
        }
        break;
    case 2:
        cout << "Enter the train sr no. from which you want to cancel tickets: ";
        cin >> o;

        if (o >= 1 && o <= h)
        {
            cout << "Enter how many seats you want to cancel: ";
            cin >> p;

            cout << "Cancelling " << p << " seats from " << c[o - 1] << "\n";
            seats[o - 1] += p;
            system("cls");
            cout << "cancelled successfully";
            goto user2option;
        }
        else
        {
            system("cls");
            cout << "Invalid train sr no. . Cancellation failed.\n";
            goto user2option;
            return;
        }
        break;
    case 3:

        while (waste != 1)
        {
            system("cls");
            cout << "\t\t\tYour current bookings:\n";
            cout << "\nSr no.      Train Number      Train Name      Departure from      hh : mm      Coach's      Seats      Last Station      Fare";
            if (h == 0)
            {
                cout << "\nThere is no Train Data in record";
            }
            else if (h != 0)
            {
                for (int k = 0; k < h; k++)
                {
                    cout << "\n"
                         << k + 1 << "\t\t";
                    cout << a[k] << "\t\t" << c[k] << "\t\t" << d[k] << "\t\t  " << b[k] << ":" << i[k] << "\t\t" << j[k] << "\t" << seats[k] << "\t\t" << m[k] << "\t\t" << fare[k];
                }
            }

            cout << "\n\t\t\tBooked Trains"
                 << "\n sr no.       Seats";

            if (n == 0)
            {
                cout << "\nThere is no Train booked in record";
                goto user2option;
            }
            else if (n != 0)
            {
                for (int k = 0; k < n; k++)
                {
                    cout << "\n  "
                         << trainChoice2[k] << "\t\t" << seatsChoice2[k];
                }
            }
            cout << "\nData printed successfully\n press 1 to go back  ";
            cin >> waste;
            system("cls");
        }
        goto user2option;

        break;
    case 4:
        system("cls");
        users();
        break;
    default:
        system("cls");
        cout << "\nInvalid option. Please try again.\n";
        user2();
        break;
    }
}

void railway::user3()
{
user3option:
    cout << "\n\t\t\tWelcome User3\n";

    cout << "\nSr no.      Train Number      Train Name      Departure from      hh : mm      Coach's      Seats      Last Station      Fare";
    if (h == 0)
    {
        cout << "\nThere is no Train Data in record";
    }
    else if (h != 0)
    {
        for (int k = 0; k < h; k++)
        {
            cout << "\n"
                 << k + 1 << "\t\t";
            cout << a[k] << "\t\t" << c[k] << "\t\t" << d[k] << "\t\t  " << b[k] << ":" << i[k] << "\t\t" << j[k] << "\t" << seats[k] << "\t\t" << m[k] << "\t\t" << fare[k];
        }
    }

    cout << "\nSelect option "
         << "\n1. Booking"
         << "\n2. Cancellation"
         << "\n3. Current tickets"
         << "\n4. Exit"
         << "\nEnter option : ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Select a train: ";
        cin >> trainChoice3[n];

        if (trainChoice3[n] >= 1 && trainChoice3[n] <= h)
        {
            cout << "Available Seats: " << seats[trainChoice3[n] - 1] << "\n";
            cout << "How many seats do you want to book? ";
            cin >> seatsChoice3[n];

            if (seatsChoice3[n] <= seats[trainChoice3[n] - 1])
            {

                cout << "Booking " << seatsChoice3[n] << " seats for " << c[trainChoice3[n] - 1] << "\n";
                seats[trainChoice3[n] - 1] -= seatsChoice3[n];
                cout << "Booked successfully";
                system("cls");
                n++;
                goto user3option;
            }
            else
            {
                system("cls");
                cout << "Not enough seats available. Booking failed.\n";
                return;
            }
        }
        else
        {
            system("cls");
            cout << "Invalid train choice.\n";
            return;
        }
        break;
    case 2:
        cout << "Enter the train sr no. from which you want to cancel tickets: ";
        cin >> o;

        if (o >= 1 && o <= h)
        {
            cout << "Enter how many seats you want to cancel: ";
            cin >> p;

            cout << "Cancelling " << p << " seats from " << c[o - 1] << "\n";
            seats[o - 1] += p;
            system("cls");
            cout << "cancelled successfully";
            goto user3option;
        }
        else
        {
            system("cls");
            cout << "Invalid train sr no. Cancellation failed.\n";
            goto user3option;
            return;
        }
        break;
    case 3:
        while (waste != 1)
        {
            system("cls");
            cout << "\nSr no.      Train Number      Train Name      Departure from      hh : mm      Coach's      Seats      Last Station      Fare";
            if (h == 0)
            {
                cout << "\nThere is no Train Data in record";
            }
            else if (h != 0)
            {
                for (int k = 0; k < h; k++)
                {
                    cout << "\n"
                         << k + 1 << "\t\t";
                    cout << a[k] << "\t\t" << c[k] << "\t\t" << d[k] << "\t\t  " << b[k] << ":" << i[k] << "\t\t" << j[k] << "\t    " << seats[k] << "\t\t" << m[k] << "\t\t" << fare[k];
                }
            }

            cout << "\n\t\t\tBooked Trains"
                 << "\n sr no.       Seats";

            if (n == 0)
            {
                system("cls");
                cout << "\nThere is no Train booked in record";
                goto user3option;
            }
            else if (n != 0)
            {
                for (int k = 0; k < n; k++)
                {
                    cout << "\n "
                         << trainChoice3[k] << "\t\t" << seatsChoice3[k];
                }
            }
            cout << "\nData printed successfully\n press 1 to go back ";
            cin >> waste;
            system("cls");
        }
        goto user3option;
        break;
    case 4:
        system("cls");
        users();
        break;
    default:
        system("cls");
        cout << "\nInvalid option. Please try again.\n";
        user3();
        break;
    }
}

int main()
{
    railway r;
    return 0;
}
