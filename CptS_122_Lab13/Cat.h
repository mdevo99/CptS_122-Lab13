#include "Mammal.h"

class Cat : public Mammal
{
	public:

		Cat()
		{
			cout << "Cat constructor..." << endl;
		}
		~Cat()
		{
			cout << "Cat destructor..." << endl;
		}
		void Move()
		{
			cout << "Cat moves a step " << endl;
		}
		void Speak()
		{
			cout << "Meow!" << endl;
		}
};