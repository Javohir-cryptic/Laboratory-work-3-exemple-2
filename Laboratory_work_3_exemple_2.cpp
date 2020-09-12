#include <iostream>
#include <cstdlib>
#include <string>

enum class Animal
{
	pig,
	chicken,
	goat,
	cat,
	dog,
	ostrich
};

std::string get_animal_name(Animal animal)
{
	switch (animal)
	{
	case (Animal::pig):
		return "A pig ";
	case (Animal::chicken):
		return "A chicken ";
	case (Animal::goat):
		return "A goat ";
	case (Animal::cat):
		return "A cat ";
	case (Animal::dog):
		return "A dog ";
	case (Animal::ostrich):
		return "A ostrich ";
	default:
		std::cout << "Error: wrong animal!\n";
		std::exit(0);
	}
}

void print_number_of_legs(Animal animal)
{
	switch (animal)
	{
	case (Animal::pig):
		std::cout << get_animal_name(Animal::pig);
		std::cout << "has 4 legs.\n";
		break;
	case (Animal::chicken):
		std::cout << get_animal_name(Animal::chicken);
		std::cout << "has 2 legs.\n";
		break;
	case (Animal::goat):
		std::cout << get_animal_name(Animal::goat);
		std::cout << "has 4 legs.\n";
		break;
	case (Animal::cat):
		std::cout << get_animal_name(Animal::cat);
		std::cout << "has 4 legs.\n";
		break;
	case (Animal::dog):
		std::cout << get_animal_name(Animal::dog);
		std::cout << "has 4 legs.\n";
		break;
	case (Animal::ostrich):
		std::cout << get_animal_name(Animal::ostrich);
		std::cout << "has 2 legs.\n";
		break;
	default:
		std::cout << "Erorr: wrong animal!\n";
		std::exit(0);
	}
}

Animal input_name_animal()
{
	std::cout << "Enter animal: pig, chicken, goat, cat, dog, ostrich)\n";
	std::string name{};
	std::cin >> name;
	std::cout << '\a';

	if (name == "pig")
		return Animal::pig;
	else if (name == "chicken")
		return Animal::chicken;
	else if (name == "goat")
		return Animal::goat;
	else if (name == "cat")
		return Animal::cat;
	else if (name == "dog")
		return Animal::dog;
	else if (name == "ostrich")
		return Animal::ostrich;
	else
	{
		std::cout << "Error: wrong animal!\n";
		std::cout << "Try again...\n";
		return (input_name_animal());
	}
}


int main()
{
	Animal animal{};
	animal = input_name_animal();

	print_number_of_legs(animal);

	return 0;
}