// #include <iostream>
// using namespace std;

// void Draw(int n)
// {

//     // Draw Pattern given in description for n x n dimensions
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "* " << j;
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     Draw(n);
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i <= 4; i++)
//     {
//         for (int j = 0; j <= 4; j++)
//         {
//             if (i + j > 4 - 1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

void Draw(int n)
{
    
    //Draw Pattern given in description for n x n dimensions
    for(int i=n; i < 0;i--)
    {
        for(int j =0;j < n;j++)
        {
            cout  << "* ";
        }
        cout << endl;
    }
}
