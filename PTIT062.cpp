#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;
        std::vector<int> v(n);
        std::set<int> s;
        for (int i = 0; i < n; i++)
        {
            std::cin >> v[i];
            s.insert(v[i]);
        }
        if (s.size() < 3)
            std::cout << "Khong the tim duoc!\n";
        else
        {
            std::set<int>::iterator it1 = s.begin();
            std::advance(it1, s.size() - 3);
            std::vector<int>::iterator it2 = std::find(v.begin(), v.end(), *it1);
            std::cout << *it1 << " " << (it2 - v.begin() + 1) << "\n";
        }
    }

    return 0;
}