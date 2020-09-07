#include <iostream>
#include <vector>
#include <string>
#include "Horoskope.h"

namespace goroskop
{
    const std::vector<std::string> chinZodiac = {"monkey", "rooster", "dog", "roar", "rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "goat"};
    const std::vector<std::string> zodiac = {"aries", "taurus", "gemini", "cancer", "leo", "virgo", "libra", "scorpio", "sagittarius", "capricorn", "aquarius", "pisces"};
	

	Person::Person(std::string f, std::string l, unsigned int y, unsigned int m, unsigned int d):firstName(f), lastName(l), year(y), month(m), day(d){}

    void Person::findChinZodiac()
    {
        int index = year % 12;
        std::cout << chinZodiac[index] << ", ";
    }

    void Person::findZodiac()
    {
        if((month == 3 && day >= 21) || (month == 4 && day <= 20))
            std::cout << zodiac[0];
        else if((month == 4 && day >= 21) || (month == 5 && day <= 21))
            std::cout << zodiac[1];
        else if((month == 5 && day >= 22) || (month == 6 && day <= 21))
            std::cout << zodiac[2];
        else if((month == 6 && day >= 22) || (month == 7 && day <= 22))
            std::cout << zodiac[3];
        else if((month == 7 && day >= 23) || (month == 8 && day <= 21))
            std::cout << zodiac[4];
        else if((month == 8 && day >= 22) || (month == 9 && day <= 23))
            std::cout << zodiac[5];
        else if((month == 9 && day >= 24) || (month == 10 && day <= 23))
            std::cout << zodiac[6];
        else if((month == 10 && day >= 24) || (month == 11 && day <= 22))
            std::cout << zodiac[7];
        else if((month == 11 && day >= 23) || (month == 12 && day <= 22))
            std::cout << zodiac[8];
        else if((month == 12 && day >= 23) || (month == 1 && day <= 20))
            std::cout << zodiac[9];
        else if((month == 1 && day >= 21) || (month == 2 && day <= 19))
            std::cout << zodiac[10];
        else if((month == 2 && day >= 20) || (month == 3 && day <= 20))
            std::cout << zodiac[11];
    }
}


