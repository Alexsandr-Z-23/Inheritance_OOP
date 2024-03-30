#include <iostream>
using namespace std;

//class Cap
//{
//public:
//	string GetColor() { return color; }
//
//private:
//	string color{"Темного"};
//};
//
//class Model
//{
//public:
//	void GetCap()
//	{
//		cout << "На маникене кепка " << cap.GetColor() << " цвета !!!\n";
//	}
//	
//private:
//	Cap cap;
//};
//
//
//
//class Humen
//{
//public:
//	void Think()
//	{
//		brain.Think();
//	};
//	void GetCap()
//	{
//		cout << "Моя кепка " << cap.GetColor() << " цвета !!!\n";
//	}
//
//private:
//	class Brain
//	{
//	public:
//		void Think()
//		{
//			cout << "Я в раздумии!!!\n";
//		}
//	};
//	Brain brain;
//	Cap cap;
//};
//class Person
//{
//public:
//	Person(const Person& person)
//	{
//		name = person.name;
//		age = person.age;
//		
//	}
//	Person(string name, unsigned age)
//	{
//		this->name = name;
//		this->age = age;
//		cout << "Создание обьекта Person\n";
//	}
//	void print_p()const
//	{
//		cout << "Имя : " << name << "\t Возраст : " << age;
//	}
//	~Person()
//	{
//		cout << "Удаление обьекта Person\n";
//	}
//	
//private:
//	string name;
//	unsigned age;
//
//};
//
//class Employee:public Person
//{
//public:
//	Employee(string name, unsigned age, string company) :Person(name, age),company(company)
//	{
//		//this->company = company;
//		cout << "Создание обьекта Employee\n";
//	}
//	Employee(const Employee& employee) :Person(employee)
//	{
//		company = employee.company;
//	}
//	void print_e()
//	{
//		cout << endl;
//		print_p();
//		cout << " Компания : " << company << endl;
//	}
//	~Employee()
//	{
//		cout << "Удаление обьекта Employee\n";
//	}
//
//private:
//	string company;
//	
//};

class Camera
{
public:
	void makePhoto()
	{
		cout << "Сделать снимок!!! \n";
	}

};


class Phone
{
public:
	void makeCall()
	{
		cout << "Совершить звонок!!! \n";
	}
};




class SmartPhone:public Phone,public Camera
{
	
	
};




int main()
{
    setlocale(LC_ALL,"ru");
	/*Humen hum;
	hum.Think();
	hum.GetCap();
	
	Model ml;
	ml.GetCap();
	Cap cap;
	cout<<cap.GetColor();*/

	/*Person person{ "Tom",23 };
	person.print_p();*/
	

	/*Employee Bob{ "Bob",28 ,"Microsoft" };
	Bob.print_e();
	Employee Tom{ Bob };
	Tom.print_e();*/


	SmartPhone iphone;
	iphone.makeCall();
	iphone.makePhoto();
	
}

