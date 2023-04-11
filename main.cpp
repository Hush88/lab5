// Coffee, Americano, Cappuccino, Latte, Puerh, Tea, Milk Oolong, Black Tea

#include <iostream>
#include <Windows.h>
using namespace std;


class Coffee{ // Підсуперклас
public:

	void display() {
		cout << "Кава --> ";
	}

};

class Tea{ // Підсуперклас
public:

	void display() {
		cout << "Чай --> " << endl;

	}

};

class HotDrink : public Coffee, public Tea { // Суперклас
public:
	void run() {
		cout << "Гарячий напій --> ";
	}

};



class Americano: public Coffee {
public:

	Americano(string x, string y, string z) : name(x), ml(y), color(z){}

	void print() {
		cout << name << ml << color << endl;
	}

private:

	string name = "Американо, ";
	string ml = "150 мл, ";
	string color = "Коричневий; ";
};

class Cappuccino: public Coffee {
public:

	Cappuccino(string x, string y, string z) : name(x), ml(y), color(z) {}

	void print() {
		cout << name << ml << color << endl;
	}

private:

	string name = "Капучино, ";
	string ml = "180 мл, ";
	string color = "Коричневий; ";
};

class Latte: public Coffee {
public:

	Latte(string x, string y, string z) : name(x), ml(y), color(z) {}

	void print() {
		cout << name << ml << color << endl;
	}

private:

	string name = "Латте, ";
	string ml = "300 мл, ";
	string color = "Світло Коричневий; ";
};


class Puerh : public Tea {
public:

	Puerh(string x, string y, string z) : name(x), ml(y), color(z) {}

	void print() {
		cout << name << ml << color << endl;
	}

private:

	string name = "Пуер, ";
	string ml = "100 мл, ";
	string color = "Помаранчевий; ";
};


class MilkOolong : public Tea {
public:

	MilkOolong(string x, string y, string z) : name(x), ml(y), color(z) {}

	void print() {
		cout << name << ml << color << endl;
	}

private:

	string name = "Молочний Улун, ";
	string ml = "120 мл, ";
	string color = "Жовтий; ";
};

class BlackTea : public Tea {
public:

	BlackTea(string x, string y, string z) : name(x), ml(y), color(z) {}

	void print() {
		cout << name << ml << color << endl;
	}

private:

	string name = "Чорний чай, ";
	string ml = "200 мл, ";
	string color = "Темно Коричневий; ";
};



int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	HotDrink hd;

	Americano amr("Американо, ", "150 мл, ", "Коричневий; ");
	Cappuccino cap("Капучино, ", "180 мл, ", "Коричневий; ");
	Latte lat("Латте, ", "300 мл, ", "Світло Коричневий; ");
	Puerh pue("Пуер, ", "100 мл, ", "Помаранчевий; ");
	MilkOolong ml("Молочний Улун, ", "120 мл, ", "Жовтий; ");
	BlackTea bl("Чорний чай, ", "200 мл, ", "Темно Коричневий; ");

	while (true) {

		cout << "\nОберіть гарячий напій: \n 1) Американо; \n 2) Капучино; \n 3) Латте; \n 4) Пуер; \n 5) Молочний Улун; \n 6) Чорний чай;\n Оберіть 0 для виходу; \n\n";
		int choice; 
		cin >> choice;

		switch (choice)
		{
		case 1:
			hd.run();
			hd.Coffee::display();
			amr.print();
			break;

		case 2:
			hd.run();
			hd.Coffee::display();
			cap.print();
			break;

		case 3:
			hd.run();
			hd.Coffee::display();
			lat.print();
			break;

		case 4:
			hd.run();
			hd.Coffee::display();
			pue.print();			
			break;

		case 5:
			hd.run();
			hd.Coffee::display();
			ml.print();
			break;

		case 6:
			hd.run();
			hd.Coffee::display();
			bl.print();
			break;

		case 0:
			cout << "\nВихід... " << endl;
			return 0;
		default:
			cout << "\nНеправильний вибір. Оберіть 1-6: " << endl;
			break;
		}
	}

	return 0;
}