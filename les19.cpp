#include "les19.h"
#include <vector>

int main()
{
	std::vector<Animal*> animal;
	animal.emplace_back(new Cat());
	animal.emplace_back(new Dog());
	animal.emplace_back(new Fox());

	for (auto &el : animal)
	{
		el->Voice();
	}
	
	while (animal.size())
	{
		delete animal[0];
		animal.erase(animal.begin());
	}
	return 0;
}
