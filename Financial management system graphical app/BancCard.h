#pragma once
#include<iostream>
#include<vector>
using std::string;
using std::ostream;
using std::vector;
using std::endl;

class Date {
	int dd;
	int mm;
	int yy;
public:
	Date() : Date(0, 0, 0){}
	Date(System::DateTime& obj) : dd{ obj.Day }, mm{ obj.Month }, yy{ obj.Year } {}
	Date(int dd, int mm, int yy) : dd{ dd }, mm{ mm }, yy{ yy } {}
	friend ostream& operator << (std::ostream& out, const Date& obj);
	bool operator == (const Date& obj);
	void operator = (const Date& obj);
	void operator = (System::DateTime& obj);
	bool operator < (const Date& obj);
	int getDay();
	int getMonth();
	int getYear();
	System::String^ show();
	

};

enum Categories { 
	TopUp, Groceries, Sport_and_medicine, Restaurants_and_entertainment,
	Treveling_and_fuel, Clothes_and_other
};


class Expense
{
	Date date;
	string name;
	double cost;
	int categorie;
public:
	Expense() : Expense({0, 0, 0}, "", 0, 0) {}
	Expense(Date date, string name, double cost, int catogorie) : date{ date }, name{ name }, cost{ cost }, categorie{ catogorie} {}
	void operator = (const Expense& obj);
	double getCost() { return cost; }
	Date getDate() { return date; }
	string getName() { return name; }
	int getCategorie() { return categorie; }
	System::String^ show();
};

class ExpiryDate {
	int mm;
	int yy;
public:
	ExpiryDate() : ExpiryDate(0, 0){}
	ExpiryDate(int mm, int yy) : mm{ mm }, yy{ yy } {};
};

class BancCard
{
	static const char path[50];
	string nameOnCard;
	const long long cardNuber;
	ExpiryDate expiryDate;
	const int CVV;
	double balance;	
	vector<Expense> expenses;
public:
	BancCard() : cardNuber{ 0 },
		CVV{ 0 }
	{}
	
	BancCard(string nameOnCard, long long cardNumber, ExpiryDate expiryDate, int CVV, double balans = 0.0) :
		nameOnCard { nameOnCard },
		cardNuber { cardNuber }, 
		expiryDate { expiryDate },
		CVV { CVV }, 
		balance{ balance }
	{}
	BancCard(BancCard& sors) :
		nameOnCard{ sors.nameOnCard },
		cardNuber{ sors.cardNuber },
		expiryDate{ sors.expiryDate },
		CVV{ sors.CVV },
		balance{ sors.balance }
	{
		for (auto exp : sors.expenses) {
			this->expenses.push_back(exp);
		}
	}
	double getBalance();
	void setBalabce(double sum);
	void addExpense(Expense obj);
	void addExpense(Date date, string name, double cost, int categorie);
	void topUpBalance(Expense obj);
	System::String^ listCategoriesSummery(vector<Expense> Expenses);
	vector<Expense> expensesPerWeek(vector<Date> week);
	System::String^ topThreeExpenses(vector<Expense> Expenses);
	vector<Expense> expensesPerMonth(int month);
	void pushList(vector<Expense> readFromFile);
	vector<Expense> getListOfExpenses();
	void writeToFile();
	void readFromFile();
	System::String^ BancCard::show();
};

