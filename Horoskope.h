#pragma once

namespace goroskop
{
	class Person
	{
		public:
			Person(std::string f, std::string l, unsigned int y, unsigned int m, unsigned int d);
			
			void findChinZodiac();
			void findZodiac();

		private:
			std::string firstName{};
			std::string lastName{};
			unsigned int year{};
			unsigned int month{};
			unsigned int day{};
	};
}
