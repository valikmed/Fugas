#include <iostream>
#include <list>

class Animal
{
private:
	std::string type;
	std::string name;

public:
	Animal(std::string type, std::string name)
	{
		this->type = type;
		this->name = name;
	}

	void Print()
	{
		std::cout << "Name:" << name << std::endl;
		std::cout << "Type:" << type << std::endl;

		std::cout << std::endl;
	}
};

class Zoo
{

public:

	std::list<Animal> Animals;

	void AddAnimalByConsole()
	{
		std::string name, type;

		std::cout << "Enter name : ";
		std::cin >> name;
		std::cout << "Enter type : ";
		std::cin >> type;
		std::cout << std::endl;

		auto animal = Animal(type, name);
		Animals.push_back(animal);
	}

	void AddManyAnimalsByConsole()
	{
		std::cout << "How many animal(s) you want to add at the list? ";
		int count;
		std::cin >> count;
		std::cout << std::endl;

		for (int i = 0; i < count; i++)
		{
			AddAnimalByConsole();
		}
	}

	void AddPushFrontByConsole()
	{
		std::cout << "Add puch front !" << std::endl;

		std::string name, type;

		std::cout << "Enter name : ";
		std::cin >> name;

		std::cout << "Enter type : ";
		std::cin >> type;

		std::cout << std::endl;

		auto animal = Animal(type, name);
		Animals.push_front(animal);
	}

	void DeletePopFrontByConsole()
	{
		std::cout << "Add Pop Front !" << std::endl;

		std::string name, type;

		auto animal = Animal(type, name);

		Animals.pop_back();

		std::cout << std::endl;
	}

	void PrintAll()
	{
		std::cout << "Arrive list:" << std::endl;

		for (auto animal : Animals)
		{
			animal.Print();
		}
	}
};

int main()
{
	auto zoo = Zoo();

	zoo.AddManyAnimalsByConsole();
	zoo.PrintAll();

	zoo.AddPushFrontByConsole();
	zoo.PrintAll();

	zoo.DeletePopFrontByConsole();
	zoo.PrintAll();

	return 0;
}