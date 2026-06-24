#include <iostream>
using namespace std;

void NumericCheck()
{
    char str[100];

    cout << "Enter an input: ";
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] < '0' || str[i] > '9')
        {
            cout << "Not Numeric";
            return;
        }
    }

    cout << "Numeric";
}

void OpCheck()
{
    char str[100];

    cout << "Enter an input: ";
    cin >> str;

    char op[] = {'+','-','*','/','%','='};
    int count = 1;

    for(int i = 0; str[i] != '\0'; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(str[i] == op[j])
            {
                cout << "Operator" << count << ": " << str[i] << endl;
                count++;
            }
        }
    }
}

void CommentCheck()
{
    char str[100];

    cout << "Enter an input: ";
    cin >> str;

    if(str[0] == '/' && str[1] == '/')
    {
        cout << "This is a Single-line Comment";
    }
    else if(str[0] == '/' && str[1] == '*')
    {
        for(int i = 2; str[i] != '\0'; i++)
        {
            if(str[i] == '*' && str[i + 1] == '/')
            {
                cout << "This is a Multi-line Comment";
            }
        }
    }
    else
    {
        cout << "Not a Comment";
    }
}

void IdentifierCheck()
{
    char str[100];

    cout << "Enter an input: ";
    cin >> str;

    if(!((str[0] >= 'a' && str[0] <= 'z') ||
         (str[0] >= 'A' && str[0] <= 'Z') ||
          str[0] == '_'))
    {
        cout << "Not an Identifier";
        return;
    }

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(!((str[i] >= 'a' && str[i] <= 'z') ||
             (str[i] >= 'A' && str[i] <= 'Z') ||
             (str[i] >= '0' && str[i] <= '9') ||
              str[i] == '_'))
        {
            cout << "Not an Identifier";
            return;
        }
    }

    cout << "This is an Identifier";
}

float Arrayavg()
{
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;

    for(int i = 0; i < n; i++)
        sum += arr[i];

    cout << "Average: " << (float)sum / n;
}

int ArrayMaxMin()
{
    int arr[50], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];

    cout << "Maximum = " << max << endl;

    int min = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] < min)
            min = arr[i];

    cout << "Minimum = " << min << endl;
}

void fullName()
{
    string fName, lName, name;

    cout << "Enter first name: ";
    cin >> fName;

    cout << "Enter last name: ";
    cin >> lName;

    name = fName + " " + lName;

    cout << "Full Name: " << name << endl;
}
int main()
{
    int choice;

    cout << "1. Numeric Check" << endl;
    cout << "2. Operator Check" << endl;
    cout << "3. Comment Check" << endl;
    cout << "4. Identifier Check" << endl;
    cout << "5. Average" << endl;
    cout << "6. Min and Max" << endl;
    cout << "7. Full Name" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            NumericCheck();
            break;

        case 2:
            OpCheck();
            break;

        case 3:
            CommentCheck();
            break;

        case 4:
            IdentifierCheck();
            break;

        case 5:
            Arrayavg();
            break;

        case 6:
            ArrayMaxMin();
            break;

        case 7:
            fullName();
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
