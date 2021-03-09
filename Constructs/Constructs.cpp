#include <iostream>
#include <clocale>
#include <string>

using namespace std;

class Student {
private:
    int age{};
    string name{};
    string surname{};
    string phone{};
    char group{};
public:
	Student() {
		cout << "Объект был создан" << endl;
	} // Конструктор по умолчанию

	Student(int age, char group) {
		this->age = age > 5 ? age : 5; // age равно age если оно больше 5, если нет, то приравниваем к 5
		this->group = group;
	}

	Student(int age, string name, string surname, string phone, char group) {
		this->age = age > 5 ? age : 5; // age равно age если оно больше 5, если нет, то приравниваем к 5
		this->name = name;
        this->surname = surname;
        this->phone = phone;
        this->group = group;
	}

    void setAll (int age, string name, string surname) {
        this->age = age;
        this->name = name;
        this->surname = surname;
    }
    void printAll() {
        cout << this->name << " " << this->surname << ". Возраст: " << this->age << endl;
    }

    ~Student() {
    	cout << "Объект был удалён" << endl;
    }

};

int main()
{
    setlocale(LC_ALL, "Russian");

    Student alex(24, 'C');
    alex.setAll(24, "Alex", "Martini");
    alex.printAll();

    Student jhon(21, "Jhon", "Marley", "+79995554433", 'C');
    //jhon.setAll(21, "Jhon", "Marley");
    jhon.printAll();

    return 0;
}

