// TIc Tac Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
char Matrix[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player = 'X';
void Structure()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void Input()
{
    int a;
    cout << "It's " << player << " turn. " << "Press the number of the Board: ";
    cin >> a;
    if (a == 1)
    {
        if (Matrix[0][0] == '1')
            Matrix[0][0] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 2)
    {
        if (Matrix[0][1] == '2')
            Matrix[0][1] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 3)
    {
        if (Matrix[0][2] == '3')
            Matrix[0][2] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 4)
    {
        if (Matrix[1][0] == '4')
            Matrix[1][0] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 5)
    {
        if (Matrix[1][1] == '5')
            Matrix[1][1] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 6)
    {
        if (Matrix[1][2] == '6')
            Matrix[1][2] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 7)
    {
        if (Matrix[2][0] == '7')
            Matrix[2][0] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if (a == 8)
    {
        if (Matrix[2][1] == '8')
            Matrix[2][1] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
    else if(a == 9)
    {
        if (Matrix[2][2] == '9')
            Matrix[2][2] = player;
        else
        {
            cout << "Field is already in use try again!" << endl;
            Input();
        }
    }
}
void Toggle()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}
char win()
{
    if (Matrix[0][0] == Matrix[0][2] && Matrix[0][2] == Matrix[0][1])
        return Matrix[0][0];
    else if (Matrix[1][0] == Matrix[1][2] && Matrix[1][2] == Matrix[1][1])
        return Matrix[1][0];
    else if (Matrix[2][0] == Matrix[2][2] && Matrix[2][2] == Matrix[2][1])
        return Matrix[2][0];
    else if (Matrix[0][0] == Matrix[1][1] && Matrix[1][1] == Matrix[2][2])
        return Matrix[0][0];
    else if (Matrix[0][0] == Matrix[1][0] && Matrix[1][0] == Matrix[2][0])
        return Matrix[0][0];
    else if (Matrix[0][1] == Matrix[1][1] && Matrix[1][1] == Matrix[2][1])
        return Matrix[0][1];
    else if (Matrix[0][2] == Matrix[1][2] && Matrix[1][2] == Matrix[2][2])
        return Matrix[0][2];
    else if (Matrix[0][2] == Matrix[1][1] && Matrix[1][1] == Matrix[2][0])
        return Matrix[0][2];
    else
        return '/';
}
char tie()
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Matrix[i][j] == 'X' || Matrix[i][j] == 'O')
                count++;
        }
    }
    if (count == 9)
        return '/';
}
int main()
{
    cout << "Welcome to Tic Tac Toe\n";
    Structure();
    while (1)
    {
        Input();
        Structure();
        if (win() != '/')
        {
            cout << "\nPlayer " << win() << " WINS\n";
            break;
        }
        if(tie() == '/')
        { 
            cout << "\nTIE";
            break;
        }
        Toggle();
        
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
