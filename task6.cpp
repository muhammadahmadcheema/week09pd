#include <iostream>
using namespace std;

main()
{

    int num, n;
    cout << "Enter number of transformations: ";
    cin >> n;

    int array[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter a number: ";
        cin >> array[i];
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < 3; x++)
        {
            if (array[x] % 2 == 0)
            {
                array[x] = array[x] - 2;
            }
            else
            {
                array[x] = array[x] + 2;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << array[i] << ", ";
    }
}