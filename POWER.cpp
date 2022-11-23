#include <iostream>
using namespace std;

int main()
{
    int t;
    int a, b, c;
    cin >> t;
        while (t--)
        {
            cin >> a >> b >> c;
            if (c % 2 == 0)
            {

                if (a < 0)
                    a = -a;
                if (b < 0)
                    b = -b;
            }
            if (c == 0)
                cout << "=" << endl;
            else if (a < b)
                cout << "<" << endl;
            else if (a > b)
                cout << ">" << endl;
            else
                cout << "=" << endl;
        }
    return 0;
}