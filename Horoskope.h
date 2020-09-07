namespace goroskop
{
	class Person
	{
		public:
			Person(std::string f, std::string l, int y, int m, int d):firstName(f), lastName(l), year(y), month(m), day(d){}
			
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
