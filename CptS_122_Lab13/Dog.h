#include "Mammal.h"
class Dog : public Mammal
{
public:
	Dog() { cout << "Dog constructor..." << endl; }
	~Dog() { cout << "Dog destructor..." << endl; }
	void Move() { cout << "Dog moves a step " << endl; }
	void Speak() { cout << "BARK!" << endl; }
};