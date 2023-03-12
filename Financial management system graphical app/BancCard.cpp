#include "BancCard.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <fstream>

using std::cout;
using std::cin;
using std::string;

const char BancCard::path[50] = "Accaunt.txt";

double BancCard::getBalance()
{
	return balance;
}


void BancCard::addExpense(Expense obj)
{
	expenses.push_back(obj);
	balance -= obj.getCost();
}

void BancCard::setBalabce(double sum)
{
	balance += sum;
}

void BancCard::addExpense(Date date, string name, double cost, int categorie)
{
	Expense obj(date, name, cost, categorie);
	expenses.push_back(obj);
	balance -= cost;
}

System::String^ BancCard::listCategoriesSummery()
{
	System::String^ out;
	int n;
	double groceries = 0,
		   sport_and_medicine = 0,
		   restaurants_and_entertainment = 0,
		   treveling_and_fuel = 0,
		   clothes_and_other = 0;
	for (auto cat : expenses) {
		n = cat.getCategorie();
		switch (n)
		{
		case Categories::Groceries: groceries += cat.getCost();
			break;
		case Categories::Sport_and_medicine: sport_and_medicine += cat.getCost();
			break;
		case Categories::Restaurants_and_entertainment: restaurants_and_entertainment += cat.getCost();
			break;
		case Categories::Treveling_and_fuel: treveling_and_fuel += cat.getCost();
			break;
		case Categories::Clothes_and_other: clothes_and_other += cat.getCost();
			break;
		}		
	}
	out =  "1. Groceries: $" + System::Convert::ToString(groceries) + "\n";
	out += "2. Sport and medicine: $" + System::Convert::ToString(sport_and_medicine) + "\n";
	out += "3. Restaurants and entertainment: $" + System::Convert::ToString(restaurants_and_entertainment) + "\n";
	out += "4. Treveling and fuel: $" + System::Convert::ToString(treveling_and_fuel) + "\n";
	out += "5. Clothes and other: $" + System::Convert::ToString(clothes_and_other)+"\n";
	return out;
}

vector<Expense> BancCard::expensesPerWeek(vector<Date> week)
{
	vector<Expense> weekExenses;
	for (auto ex : expenses)
	{
		if (week[0] == ex.getDate() ||
			week[1] == ex.getDate() ||
			week[2] == ex.getDate() ||
			week[3] == ex.getDate() ||
			week[4] == ex.getDate() ||
			week[5] == ex.getDate() ||
			week[6] == ex.getDate())
		{
			weekExenses.push_back(ex);
		}
	}
	return weekExenses;
}

void BancCard::topUpBalance(Expense obj)
{
	expenses.push_back(obj);
	balance += obj.getCost();
}

System::String^ BancCard::topThreeExpensesPerWeek(vector<Expense> weekExpenses)
{ 
	System::String^ out;
	if (weekExpenses.empty())
	{
		out = "No spending found in the selected month\n";
	}
	else {
		sort(weekExpenses.begin(), weekExpenses.end(), [](Expense& obj, Expense& objNext) {
			if (obj.getCost() > objNext.getCost()) return true;
			else return false;
			});
		for (int i = 0; i < 3 && i < weekExpenses.size(); i++)
		{
			out += System::Convert::ToString(i + 1) + ". " + weekExpenses[i].show() + "\n";
		}
	}
	return out;
}


vector<Expense> BancCard::expensesPerMonth(int month)
{
	vector<Expense> monthExpenses;
	for (auto exp : expenses) {
		if (exp.getDate().getMonth() == month)
		{
			monthExpenses.push_back(exp);
		}
	}
	return monthExpenses;
}

System::String^ BancCard::topThreeExpensesPerMonth(vector<Expense> monthExpenses)
{
	System::String^ out;
	if (monthExpenses.empty())
	{
		out = "No spending found in the selected month\n";
	}
	else {
		sort(monthExpenses.begin(), monthExpenses.end(), [](Expense& obj, Expense& objNext) {
			if (obj.getCost() > objNext.getCost()) return true;
			else return false;
			});

		for (int i = 0; i < 3 && i < monthExpenses.size(); i++)
		{
			out += System::Convert::ToString(i + 1) + ". " + monthExpenses[i].show() + "\n";
		}
	}
	
	return out;
}

void BancCard::pushList(vector<Expense> readFromFile)
{
	this->expenses.clear();
	for (auto exp : readFromFile) {
		this->expenses.push_back(exp);
	}
}

vector<Expense> BancCard::getListOfExpenses()
{
	return expenses;
}

void BancCard::writeToFile()
{
	std::ofstream out;
	out.open(path, std::ios::out);
	if (!out.is_open())
		cout << "File opening misstake.";
	else {
		out << balance << endl;
		for (int i = 0; i < expenses.size(); i++) {
			out << expenses[i].getDate().getDay() << "\t";
			out << expenses[i].getDate().getMonth() << "\t";
			out << expenses[i].getDate().getYear() << "\t";
			out << expenses[i].getCost() << "\t";
			out << expenses[i].getCategorie();
			out << expenses[i].getName() << "\t";
			if (i < expenses.size() - 1) out << endl;
		}
	}
}

void BancCard::readFromFile()
{
	std::ifstream in;
	int read_dd, read_mm, read_yy, read_categorie;
	double read_cost;
	string read_name;
	Date date;
	Expense read;
	in.open(path, std::ios::in);
	if (!in.is_open())
		cout << "File opening misstake.";
	else {
		in >> this->balance;
		while (!in.eof())
		{
			in >> read_dd;
			in >> read_mm;
			in >> read_yy;
			in >> read_cost;
			in >> read_categorie;
			getline(in, read_name);
			expenses.push_back(Expense({ read_dd, read_mm, read_yy }, read_name, read_cost, read_categorie));
		}
	}
}

System::String^ BancCard::show()
{
	System::String^ out;
	for (auto exp : expenses) {
		out += exp.show() + "\n";
	}
	return out;
}


ostream& operator<<(std::ostream& out, const Date& obj)
{
	out << obj.dd << "/" << obj.mm << "/" << obj.yy;
	return out;
}


bool Date::operator==(const Date& obj)
{
	bool res = this->dd == obj.dd && this->mm == obj.mm && this->yy == obj.yy;
	return res;
}

void Date::operator=(const Date& obj)
{
	this->dd = obj.dd;
	this->mm = obj.mm;
	this->yy = obj.yy;
}

void Date::operator=(System::DateTime& obj)
{	
	this->dd = obj.Day;
	this->mm = obj.Month;
	this->yy = obj.Year;	
}



bool Date::operator<(const Date& obj)
{
	if (this->yy < obj.yy)  return true;
	else if (this->yy > obj.yy) return false;
	else {
		if (this->mm < obj.mm) return true;
		else if (this->mm > obj.mm) return false;
		else {
			if (this->dd < obj.dd) return true;
			else  return false;
		}
	}
}

int Date::getDay()
{
	return dd;
}

int Date::getMonth()
{
	return mm;
}

int Date::getYear()
{
	return yy;
}

System::String^ Date::show()
{
	System::String^ day = (dd < 10 ? System::Convert::ToString("0" + dd) : System::Convert::ToString(dd));
	System::String^ month = (mm < 10 ? System::Convert::ToString("0" + mm) : System::Convert::ToString(mm));	
	System::String^ out = day + "/" + month + "/" + System::Convert::ToString(yy);
	return out;
}

void Expense::operator=(const Expense& obj)
{
	this->date = obj.date;
	this->name = obj.name;
	this->cost = obj.cost;
	this->categorie = obj.categorie;
}

System::String^ Expense::show()
{
	System::String^ out;
	System::String^ cat;
	System::String^ namec = gcnew System::String(name.c_str());
	switch (categorie)
	{
	case Categories::TopUp: cat = "";
		break;
	case Categories::Groceries: cat = " Groceries.";
		break;
	case Categories::Sport_and_medicine: cat = " Sport and medicine.";
		break;
	case Categories::Restaurants_and_entertainment: cat = " Restaurants and entertainment.";
		break;
	case Categories::Treveling_and_fuel: cat = " Treveling and fuel.";
		break;
	case Categories::Clothes_and_other: cat = " Clothes and other.";
		break;
	}
	out = date.show() + " $" + System::Convert::ToString(cost) + " " + namec + " " + cat;
	return out;
}
