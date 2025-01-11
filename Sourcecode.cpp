#include <bits/stdc++.h>

using namespace std;

int calculateSGPA();
int calculateCGPA();

int main()
{
    system("cls");
    int choice;
    cout << "\n\n__________________________________________________________________________________________________________________________ " << endl;
    cout << "SGPA & CGPA Calculator ...                                                                                                     \n\n\n" << endl;
    cout << "  ______   ______   ______   ______          ______            _____                                                           " << endl;
    cout << " |        |        |      | |      |        |      | ||     | |     |                                                          " << endl;
    cout << " |        |        |      | |      |        |      | | |    | |      |                                                         " << endl;
    cout << " |______  |  ____  |______| |______|        |______| |  |   | |       |                                                        " << endl;
    cout << "        | |      | |        |      |        |      | |   |  | |       |                                                        " << endl;
    cout << "        | |      | |        |      |        |      | |    | | |      |                                                         " << endl;
    cout << "  ______| |______| |        |      |        |      | |     || |_____|                                                          " << endl;
    cout << "  ______  ______   ______   ______          ______  ______           ______                   ______  ______  ______   ______  " << endl;
    cout << " |       |        |      | |      |        |       |      | |       |       |      | |       |      |    |   |      | |      | " << endl;
    cout << " |       |        |      | |      |        |       |      | |       |       |      | |       |      |    |   |      | |      | " << endl;
    cout << " |       |  ____  |______| |______|        |       |______| |       |       |      | |       |______|    |   |      | |______| " << endl;
    cout << " |       |      | |        |      |        |       |      | |       |       |      | |       |      |    |   |      | | |      " << endl;
    cout << " |       |      | |        |      |        |       |      | |       |       |      | |       |      |    |   |      | |  |     " << endl;
    cout << " |______ |______| |        |      |        |______ |      | |______ |______ |______| |______ |      |    |   |______| |   |    " << endl;
    cout << "______________________________________________________________________________________________________________________________\n" << endl;
    sub:
    do{
        cout << "MENU:" << endl;
        cout << "     1. Calculate SGPA (Semester Grade Point Average)" << endl;
        cout << "     2. Calculate CGPA (Cumulative Grade Point Average)" << endl;
        cout << "     3. Exit the Program . \n\n\n" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                    calculateSGPA();
                    break;

            case 2:
                    calculateCGPA();
                    break;

            case 3:
                    exit(EXIT_SUCCESS);
                    break;
            default:
                cout << "You have entered wrong input.Try again! \n" << endl;
                goto sub;
                break;
        }
    } while ( choice != 3);
}

int calculateSGPA()
{
    int q;
    system ("cls");
    cout << "\n\nSGPA Calculating ...                                \n\n"<<endl;
    cout << "  ______  ______   ______   ______          ______  ______           ______                   ______  ______  ______   ______  " << endl;
    cout << " |       |        |      | |      |        |       |      | |       |       |      | |       |      |    |   |      | |      | " << endl;
    cout << " |       |        |      | |      |        |       |      | |       |       |      | |       |      |    |   |      | |      | " << endl;
    cout << " |_____  |  ____  |______| |______|        |       |______| |       |       |      | |       |______|    |   |      | |______| " << endl;
    cout << "       | |      | |        |      |        |       |      | |       |       |      | |       |      |    |   |      | | |      " << endl;
    cout << "       | |      | |        |      |        |       |      | |       |       |      | |       |      |    |   |      | |  |     " << endl;
    cout << "  _____| |______| |        |      |        |______ |      | |______ |______ |______| |______ |      |    |   |______| |   |    \n\n\n" << endl;
    cout << "_______________________________________________________________________________________________________________________________" << endl;
    cout << " Enter the number of subjects whose SGPA have to be calculated : ";
    cin >> q;

    float credit [q];
    float grade [q];

    cout << endl;
    for (int i = 0 ; i < q ; i++)
    {
        cout << "Enter the credit score for the subject "<<i+1<<" : ";
        cin >> credit[i];
        cout << "Enter the grade (in points) of the subject "<<i+1<<" : ";
        cin >> grade[i];
        cout << endl;
    }
    cout << "______________________________________________________________________________________________________________________________\n\n" << endl;

    float sum = 0;
    float total;
    for (int j = 0 ; j < q ; j++)
    {
        total = credit[j] * grade[j];
        sum = sum + total;
    }

    float totalCredits = 0;
    for (int k = 0 ; k < q ; k++)
    {
        totalCredits = totalCredits + credit[k];
    }

    cout << "\nTotal Points: " << sum;
    cout << " \nTotal Credits: " << totalCredits;
    cout <<  " \nTotal SGPA: " << sum/totalCredits;
    cout <<" \n\n\n";
    cout << "###########################################################################################################################\n\n\n"<<endl;

    return 0;
}

int calculateCGPA()
{
    system("cls");
    int l;
    cout << "CGPA Calculating ...                                   \n\n" << endl;
    cout << "  ______  ______   ______   ______          ______  ______           ______                   ______  ______  ______   ______  " << endl;
    cout << " |       |        |      | |      |        |       |      | |       |       |      | |       |      |    |   |      | |      | " << endl;
    cout << " |       |        |      | |      |        |       |      | |       |       |      | |       |      |    |   |      | |      | " << endl;
    cout << " |       |  ____  |______| |______|        |       |______| |       |       |      | |       |______|    |   |      | |______| " << endl;
    cout << " |       |      | |        |      |        |       |      | |       |       |      | |       |      |    |   |      | | |      " << endl;
    cout << " |       |      | |        |      |        |       |      | |       |       |      | |       |      |    |   |      | |  |     " << endl;
    cout << " |______ |______| |        |      |        |______ |      | |______ |______ |______| |______ |      |    |   |______| |   |    \n\n\n" << endl;
    cout << "_______________________________________________________________________________________________________________________________" << endl;
    cout << "Please enter the number of semesters :";
    cin >> l;
    cout << "\n\n" << endl;
    float sem[l];
    int i;

    for ( i = 0 ;i < l ; i++)
    {
        cout << " Please enter Semester "<<i+1<<" Result(SGPA): ";
        cin >> sem[i];
        cout << "\n" << endl;
    }

    float total_sem = 0;
    for( int j = 0;j < l;j++)
    {
        total_sem = total_sem + sem[j];
    }

    cout<<"Your CGPA is " << total_sem / l << " . \n\n\n" << endl;
    cout<<"###########################################################################################################################\n\n\n"<<endl;

    return 0;
}
