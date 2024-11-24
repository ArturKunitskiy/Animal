#include <iostream>
using namespace std;

class Animal
{
private:

	string name; // ��������
	string species; // ���
	string continent; // ��������� 
	double kilogram; // ���

public:

	Animal() {}
	Animal(string nm, string sp, string cont, double kg)
	{
		name = nm;
		species = sp;
		continent = cont;
		kilogram = kg;
	}
	void Input()
	{
		cout << "Input name of the animal: " << endl;
		cin >> name;
		cout << "Input species of the animal: " << endl;
		cin >> species;
		cout << "Input continent where live the animal: " << endl;
		cin >> continent;
		cout << "Input weight of the animal: " << endl;
		cin >> kilogram;
	}
	void Print()
	{
		cout << name << species << continent << kilogram << endl;
	}
	void Eat()
	{
		cout << "Unknown food for animal\n";
	}
	void Sound()
	{
		cout << "Unknown sound of animal\n";
	}
};

class Parrot :public Animal
{
public:
	Parrot() {};
	Parrot(string nm, string sp, string cont, double kg) :Animal(nm, sp, cont, kg) {};
	void Eat()
	{
		cout << "Fruits, vegetables, berries, herbs, cereals!" << endl;
	}
	void Sound()
	{
		cout << "Squeaks, squeals, whistles and can also talk! :)" << endl;
		cout << endl;
	}
};

class Elephant :public Animal
{
public:
	Elephant(){}
	Elephant(string nm, string sp, string cont, double kg):Animal(nm, sp, cont, kg){}

	// ��������������� �������
	void Eat()
	{
		cout << "Elephants are herbivores!" << endl;
	}
	void Sound()
	{
		cout << "Can be heard at the zoo! :)" << endl;
		cout << endl;
	}
};

class Dog :public Animal
{
public:
	Dog() {}
	Dog(string nm, string sp, string cont, double kg) :Animal(nm, sp, cont, kg) {}

	void Eat()
	{
		cout << "Beef, turkey, chicken, fish!" << endl;
	}
	void Sound()
	{
		cout << "Woof!" << endl;
		cout << endl;
	}
};

class Cat :public Animal
{
public:
	Cat() {}
	Cat(string nm, string sp, string cont, double kg) :Animal(nm, sp, cont, kg) {}

	void Eat()
	{
		cout << "Meat, fish, cereals, dairy products!" << endl;
	}
	void Sound()
	{
		cout << "Meow!" << endl;
		cout << endl;
	}
};

int main()
{
	Parrot obj1("Ara\t", "Parrot\t", "South and central Africa\t", 1.5);
	obj1.Print();
	obj1.Eat();
	obj1.Sound();

	Elephant obj2("Indian\t", "Elephant\t", "Asia\t", 5000);
	obj2.Print();
	obj2.Eat();
	obj2.Sound();

	Dog obj3("Great Dane\t", "Dog\t", "Germany\t", 80);
	obj3.Print();
	obj3.Eat();
	obj3.Sound();

	Cat obj4("Cornish Rex\t", "Cat\t", "United Kingdom\t", 3);
	obj4.Print();
	obj4.Eat();
	obj4.Sound();
}