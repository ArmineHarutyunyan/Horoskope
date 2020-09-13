#pragma once

namespace goroskop
{
	class Person
	{
		public:
			Person(std::string f, std::string l, unsigned int y, unsigned int m, unsigned int d);
			
			void findChinZodiac() const;
			void findZodiac() const;

		private:
			const std::string firstName{};
			const std::string lastName{};
			const unsigned int year{};
			const unsigned int month{};
			const unsigned int day{};
	};
}
