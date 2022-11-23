#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
   	while (n--)
    {
    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;
    if ((ngay < 1 || ngay > 31) || (thang < 1 || thang > 12) || (nam < 1990 || nam > 3000))
    {
        cout << "FALSE\n";
    }
    else if (thang == 2 && ngay > 28)
    {
        if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
        {
            if (ngay > 29)
            {
                cout << "FALSE\n";
            }
            else
            {
                cout <<"TRUE\n";
            }
        }
        else
        {
            cout << "FALSE\n";
        }
    }
     else
        {
            cout <<"TRUE\n";
        }
    }

    return 0;
}