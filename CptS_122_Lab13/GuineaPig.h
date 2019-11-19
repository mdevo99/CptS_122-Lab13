#include "Mammal.h"

class GuineaPig : public Mammal
{
public:

	GuineaPig()
	{
		cout << "GuineaPig constructor..." << endl;
	}
	~GuineaPig()
	{
		cout << "GuineaPig destructor..." << endl;
	}
	void Move()
	{
		cout << "GuineaPig moves a step " << endl;
	}
	void Speak()
	{
		cout << "Squeak!" << endl;
	}
};