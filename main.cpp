#include <iostream>
#include <vector>
#include <string>
#include "Horoskope.h"

using namespace goroskop;

int main()
{
    int n{};
    std::cin >> n;
    std::vector<Person> group;
    for(int i = 0; i < n; ++i)
    {
        std::string fname{};
        std::string lname{};
        int y{};
        int m{};
        int d{};
        std::cin >> fname >> lname >> y >> m >> d;
        group.push_back(Person(fname, lname, y, m, d));
    }
    for(size_t i = 0; i < group.size(); ++i)
    {
        group[i].findChinZodiac();
        group[i].findZodiac();
        std::cout << "\n";
    }
}
