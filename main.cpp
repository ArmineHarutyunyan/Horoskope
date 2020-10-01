#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include "Horoskope.h"

using namespace goroskop;

int main()
{
    int n{};
    std::cin >> n;
    std::vector<Person> group;
	try
	{
    	for(int i = 0; i < n; ++i)
    	{
        	std::string fname{};
        	std::string lname{};
        	int y{};
        	int m{};
        	int d{};
        	std::cin >> fname >> lname >> y >> m >> d;
			if(y < 0 || m < 1 || m > 12 || d < 1 || d > 31)
				throw std::invalid_argument("This is an incorrect date\n");
        	group.push_back(Person(fname, lname, y, m, d));
    	}
    	for(size_t i = 0; i < group.size(); ++i)
    	{
        	group[i].findChinZodiac();
        	group[i].findZodiac();
        	std::cout << "\n";
    	}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
}
