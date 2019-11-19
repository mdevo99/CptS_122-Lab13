#include "Mammal.h"

class Horse : public Mammal
{
public:

	Horse()
	{
		cout << "Horse constructor..." << endl;
	}
	~Horse()
	{
		cout << "Horse destructor..." << endl;
	}
	void Move()
	{
		cout << "Horse moves a step " << endl;
	}
	void Speak()
	{
		cout << "Nay!" << endl;
	}
};