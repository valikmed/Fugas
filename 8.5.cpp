#include <iostream>
#include <vector>



class Human
{
	int age = 0;
	std::string name;

public:
	std::vector<Human> Humans;
	
	Human(int age, std::string name)
	{
		this->age = age;
		this->name = name;
	}

	Human(){}

	void AddHuman();

	void PrintHuman();
};



class Student :public Human
{
	int grade = 0;
	double averege = 0.0;

public:
	std::vector<Student> StudentGrade;

	Student(int grade, double averege) 
	{
		this->grade = grade; 
		this->averege = averege;
	}

	Student() {}

	void HowManyHuman();

	void AddName();

	void HowManyGrade();

	void Grade();

	void Averege();

	void ChangeGrade();

	void PrintGrade();

	void PrintSudent();

};



void Student::HowManyHuman()
{
	int count = 0;
	std::cout << "How many Human(s) must be?";
	std::cin >> count;
	std::cout << std::endl;

	for (int i = 0; i < count; i++)
	{
		AddHuman();
		HowManyGrade();
		Averege();
	}
}


void Human::AddHuman()
{
	std::cout << "Name:";
	std::cin >> name;
	
	std::cout << "Age:";
	std::cin >> age;
	
	std::cout << std::endl;
	auto human = Human(age, name);
	Humans.push_back(human);
}

void Human::PrintHuman()
{
	std::cout << "Name:" << name << std::endl;
	std::cout << "Age:" << age << std::endl;
}


void Student::HowManyGrade()
{
	int count = 0;
	std::cout << "How many grad(s) must be?";
	std::cin >> count;
	std::cout << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << "Grade #" << i << ": ";
		std::cin >> grade;

		auto student = Student(grade, averege);
		StudentGrade.push_back(student);
	}
}


void Student::Averege()
{
	double sum = 0.0;

	for (int i = 0; i < StudentGrade.size(); i++)
	{
		sum += StudentGrade[i].grade;
		auto student = Student(grade, averege);
	}

	averege = sum / StudentGrade.size();
	std::cout << "Averege = " << averege;
	std::cout << std::endl << std::endl;
}


void Student::Grade()
{
	std::cout << "Grade #" << ": " << grade << std::endl;
}

void Student::PrintGrade()
{
	std::cout << "Arrived list of Grade(s) !";
	std::cout << std::endl << std::endl;

	for (auto student : StudentGrade)
	{
		student.Grade();
	}
}


void Student::PrintSudent()
{
	std::cout << "Arrived list of Student(s) !";
	std::cout << std::endl << std::endl;

	for (auto human : Humans)
	{
		human.PrintHuman();
	}
	std::cout << std::endl;
}


void Student::AddName()
{
	std::string quation;

	std::cout << "Do you want add name, enter 'yes/no'?";
	std::cin >> quation;
	std::cout << std::endl;

	if (quation == "yes")
	{
		AddHuman();
	}

	else if (quation == "no")
	{
		ChangeGrade();
	}
}


void Student::ChangeGrade()
{
	std::string quation;

	std::cout << "Do you want change grade, enter 'yes/no'?";
	std::cin >> quation;
	std::cout << std::endl;

	if (quation == "yes")
	{
		HowManyGrade();
		Averege();
	}
	else
	{
		std::cout << "Upps error !" << std::endl;
	}
}



int main()
{
	auto student = Student();

	student.HowManyHuman();
	student.AddName();
	student.ChangeGrade();
	student.PrintHuman();
	student.PrintSudent();
	student.PrintGrade();

	return 0;
}