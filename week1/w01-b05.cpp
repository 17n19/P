#include <iostream>
using namespace std;

int main()
{
    char input[100];
    cin >> input;

    int x = 0;
    int y = 0;

    char curr = 'N';
    int index = 0;

    while (curr != '\0')
    {
        curr = input[index];

        x += curr == 'E' ? 1 : curr == 'W' ? -1 : 0;
        y += curr == 'N' ? 1 : curr == 'S' ? -1 : 0;

        if (curr == 'Z')
            x = y = 0;

        index++;
    }
    cout << x << " " << y << endl;
}