#include <iostream>
using namespace std;

void Menu();
void MenuSub1(); 
void MenuSub2(); 
void MenuSub3();
int Find(string key, string arr[], int size);

int main()
{
	setlocale(LC_ALL, "rus");

	cout << endl;
	cout << "\t\t ТЕЛЕФОНАЯ КНИГА" << endl; cout << endl;
	
	char yesNo;

	const int SIZE = 10;
	string names[SIZE] { "Kiril", "Mefodiy", "Artur","0","0","0","0","0","0","0"}; 
	string tel[SIZE] { "89255563636", "89589585425", "89568753328","0","0","0","0","0","0","0"}; 
	string find, name, phone;
	int count, index, choise, choiceMenu, choiceSubMenu1, choiceSubMen2, choiceSubMen3;;

	do
	{
		yesNo = 'N';

		Menu(); 		// вывод меню 1) Список контактов | 2) Поиск контактов | 3) Добавить контакт	
		cout << "Введите номер меню: "; cin >> choiceMenu; cout << endl;

		if (choiceMenu == 1) 		//Меню выбора1
		{
			MenuSub1(); 

			if (names[0].size() > 1 && tel[0].size() > 1)
			{
				for (int i = 0; i < SIZE; i++)
				{
					if (names[i].size() > 1 && tel[i].size() > 1)
					{
						count = i + 1;
						cout << count << ") " << "Имя: " << names[i] << " Телефон: " << tel[i]; cout << endl;
					}
				}
			}
			else
			{
				cout << endl;
				cout << "Cписок контактов пуст. Неоходимо добавить контакты." << endl;
				cout << "Хотите ли вы выйти в гланое меню?" << " Введите 'Y' или 'N'" << endl; cin >> yesNo;
			}

		}
		else if (choiceMenu == 2) //Меню выбора2.
		{
			MenuSub2();

			cout << "Вариан 1: введите 1 если хотите поиск по имени"; cout << endl;
			cout << "Вариан 2: введите 2 если хотите поиск по имени"; cout << endl;
			cout << "Введите вариант: "; cin >> choise;

			if (choise == 1)
			{
				cout << "Введите имя: "; cin >> find;
				index = Find(find, names, SIZE);

				if (index == -1)
				{
					cout << endl;
					cout << "Такого имени нет!"; cout << endl; cout << endl;
					cout << "Хотите ли вы вернуться в главное меню?" << " Введите 'Y' или 'N'" << endl; cin >> yesNo;
					continue;
				}
				else
				{
					cout << endl;
					cout << names[index] << " : " << tel[index]; cout << endl; cout << endl;
					cout << "Хотите ли вы вернуться в главное меню?" << " Введите 'Y' или 'N'" << endl; cin >> yesNo;
					continue;
				}
			}
			if (choise == 2)
			{
				cout << "Введите номер: "; cin >> find;
				index = Find(find, tel, SIZE);

				if (index == -1)
				{
					cout << endl;
					cout << "Такого номера нет!"; cout << endl; cout << endl;
					cout << "Хотите ли вы вернуться в главное меню?" << " Введите 'Y' или 'N'" << endl; cin >> yesNo;
					continue;
				}
				else
				{
					cout << endl;
					cout << names[index] << " : " << tel[index]; cout << endl; cout << endl;
					cout << "Хотите ли вы вернуться в главное меню?" << " Введите 'Y' или 'N'" << endl; cin >> yesNo;
					continue;
				}
			}
			else
			{
				cout << endl;
				cout << "Такого варианта нет!" << endl; cout << endl;
				cout << "Хотите ли вы вернуться в главное меню?" << " Введите 'Y' или 'N'" << endl; cin >> yesNo;
				continue;
			}
		}		
		else if (choiceMenu == 3) //Меню выбора3
		{
			do
			{
				MenuSub3();

				cout << "Введите имя: "; cin >> name;

				for (int i = 0; i < SIZE; i++)
				{
					if (names[i].size() == 1)
					{
						names[i] = name;
						break;
					}
				}
				cout << "Введите телефон: "; cin >> phone;

				for (int i = 0; i < SIZE; i++)
				{
					if (tel[i].size() == 1)
					{
						tel[i] = phone;
						break;
					}
				}
				cout << endl;
				cout << "Хотите ли вы еще добавить контакт?" << " Введите 'Y' или 'N'" << endl; cin >> yesNo;

			} while (yesNo == 'Y' || yesNo == 'y');
		}
		
		cout << endl;
		cout << "Хотите ли вы вернуться в главное меню?" << " Введите 'Y' или 'N'" << endl; cin >> yesNo;
		
	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
}

void Menu() //Функция вывода меню
{
	for (int i = 0; i < 18; i++)
	{
		cout << " __ ";
	}

	cout << endl;
	cout << endl;
	cout << "|  1) СПИСОК КОНТАКТОВ  |  2) ПОИСК КОНТАКТОВ  |  3) ДОБАВИТЬ КОНТАКТ  |" << endl;

	for (int i = 0; i < 18; i++)
	{
		cout << " __ ";
	}
	cout << endl; cout << endl;
}

void MenuSub1() // Под меню1
{
	for (int i = 0; i < 6; i++)
	{
		cout << " __ ";
	}

	cout << endl;
	cout << endl;
	cout << "| 1) СПИСОК КОНТАКТОВ  |" << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << " __ ";
	}
	cout << endl; cout << endl; cout << endl;
}

void MenuSub2() // Под меню2
{
	for (int i = 0; i < 6; i++)
	{
		cout << " __ ";
	}

	cout << endl;
	cout << endl;
	cout << "| 2) ПОИСК КОНТАКТОВ  |" << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << " __ ";
	}
	cout << endl; cout << endl; cout << endl;
}

void MenuSub3() // Под меню3
{
	for (int i = 0; i < 6; i++)
	{
		cout << " __ ";
	}

	cout << endl;
	cout << endl;
	cout << "| 3) ДОБАВИТЬ КОНТАКТ  |" << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << " __ ";
	}
	cout << endl; cout << endl; cout << endl;
}

int Find(string key, string arr[], int size) //Функция поиска
{
	for (int i = 0; i < size; i++)
	{
		if (key == arr[i])
		{
			return i;
		}
	}
	return -1;
}
