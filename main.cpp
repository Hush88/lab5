// Coffee, Americano, Cappuccino, Latte, Puerh, Tea, Milk Oolong, Black Tea

#include <iostream>
#include <Windows.h>
using namespace std;


class Coffee{ // ϳ����������
public:

	void display() {
		cout << "���� --> ";
	}

};

class Tea{ // ϳ����������
public:

	void display() {
		cout << "��� --> " << endl;

	}

};

class HotDrink : public Coffee, public Tea { // ���������
public:
	void run() {
		cout << "������� ���� --> ";
	}

};



class Americano: public Coffee {
public:

	Americano(string x, string y, string z) : name(x), ml(y), color(z){}

	void print() {
		cout << name << ml << color << endl;
	}

private:

	string name = "���������, ";
	string ml = "150 ��, ";
	string color = "����������; ";
};

class Cappuccino: public Coffee {
public:

	Cappuccino(string x, string y, string z) : name(x), ml(y), color(z) {}

	void print() {
		cout << name << ml << color << endl;
	}

private:

	string name = "��������, ";
	string ml = "180 ��, ";
	string color = "����������; ";
};

class Latte: public Coffee {
public:

	Latte(string x, string y, string z) : name(x), ml(y), color(z) {}

	void print() {
		cout << name << ml << color << endl;
	}

private:

	string name = "�����, ";
	string ml = "300 ��, ";
	string color = "����� ����������; ";
};


class Puerh : public Tea {
public:

	Puerh(string x, string y, string z) : name(x), ml(y), color(z) {}

	void print() {
		cout << name << ml << color << endl;
	}

private:

	string name = "����, ";
	string ml = "100 ��, ";
	string color = "������������; ";
};


class MilkOolong : public Tea {
public:

	MilkOolong(string x, string y, string z) : name(x), ml(y), color(z) {}

	void print() {
		cout << name << ml << color << endl;
	}

private:

	string name = "�������� ����, ";
	string ml = "120 ��, ";
	string color = "������; ";
};

class BlackTea : public Tea {
public:

	BlackTea(string x, string y, string z) : name(x), ml(y), color(z) {}

	void print() {
		cout << name << ml << color << endl;
	}

private:

	string name = "������ ���, ";
	string ml = "200 ��, ";
	string color = "����� ����������; ";
};



int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	HotDrink hd;

	Americano amr("���������, ", "150 ��, ", "����������; ");
	Cappuccino cap("��������, ", "180 ��, ", "����������; ");
	Latte lat("�����, ", "300 ��, ", "����� ����������; ");
	Puerh pue("����, ", "100 ��, ", "������������; ");
	MilkOolong ml("�������� ����, ", "120 ��, ", "������; ");
	BlackTea bl("������ ���, ", "200 ��, ", "����� ����������; ");

	while (true) {

		cout << "\n������ ������� ����: \n 1) ���������; \n 2) ��������; \n 3) �����; \n 4) ����; \n 5) �������� ����; \n 6) ������ ���;\n ������ 0 ��� ������; \n\n";
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
			cout << "\n�����... " << endl;
			return 0;
		default:
			cout << "\n������������ ����. ������ 1-6: " << endl;
			break;
		}
	}

	return 0;
}