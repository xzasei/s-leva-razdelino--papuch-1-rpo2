#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	const int row = 4;
	const int col = 4;
	int suuum = 0;

	int arr[row][col]{};

	arr[0][1] = 5;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10 + 1;
			std::cout << arr[i][j] << " ";
			suuum += arr[i][j];

		}
		std::cout << "\t|"<< suuum << "\n";
	}
	std::cout << "-----------------------\n\n";

	return 0;
}







//инфа
/*

std::cout <<	посос
std::endl		делает строку
std::sin >>		ввод пососов

Тип данных

bool			false/true							0 -- false

char			'+' только один символ буквы/циффры 43
unsigned char	'+'									43		0 -- 255

short			123									-32768 -- 32767
unigned short	123									0 --  65535

int				123456789							-2147483648 -- 2147383637
unigned int		123456789							0 -- 294967295
long long int	123456789							короче большой

float			123456.123456						3.4T-38 -- 3.4+38
double			95490853409802354.21421				1.7E-308 -- 1.7e+308
long double		4141098421842189024					3.4-3932 -- 1.1E+4932

Операторы:
математические: + - * / = %  ++ -- += -= *= /= ()
Сравнительные: < > <= >= == !=			<=>
Логические:  && (и)		|| (или)	 ! (не)

ТАБУ:	goto нельзя		and or not int Имя переменной 
*/
// конвентор
/*
	double a = 0;
	double b = 0;
	double e = 0;
	char v;

	std::cout << "Введите сколько вы хотите конвертировать в другую валюту \n" << std::endl;
	std::cout << "Введите:";
	std::cin >> a;
	std::cout << "\nВыберете какой тип валюты вам нужен\n" << "1 - доллар (100) \n" << "2 - Евро (99) \n" << "3 - Фаритость (250)\n" << "4 - Юань (12)\n" << std::endl;

	std::cout << "Введите:";
	std::cin >> b;

	if (b == 0)
	{
		std::cout << "Сделайте все заново";
		return 0;
	}

	else if (b == 1)
	{
		e = (a - (a / 100) * 5) / 100;
		std::cout << "\nОперация пройдет на " << e << " dollars" << std::endl;
	}
	else if (b == 2)
	{
		e = (a - (a / 100) * 5) / 99;
		std::cout << "\nОперация пройдет на " << e << " евро"<< std::endl;
	}

	else if (b == 3)
	{
		e = (a - (a / 100) * 5) / 250;
		std::cout << "\nОперация пройдет на " << e << " Фаритость"<< std::endl;
	}
	else if (b == 4)
	{
		e = (a - (a / 100) * 5) / 12;
		std::cout << "\nОперация пройдет на " << e << " Юань"<< std::endl;
	}
	else
	{
		std::cout << "Ошибка просьба заново ввести:";
		return 0;
	}

	std::cout << "\nЧто бы произвесть опецарию" "\nПотвердите Напишите " << "Y/д"<< std::endl << "\nЕсли нет 'N/н' напишите что угодно" << std::endl;
	std::cout << "\nВведите:";
		std::cin >> v;

		if (v == 'Y' || v == 'y' || v == 'д' || v == 'Д' )
		{
			std::cout << "Операция произвелась";
		}
		else
		{
			std::cout << "Операция отменена Соси";
		}
*/
// дискриминант 
/*	

	double a = 0, b = 0, c = 0, D = 0, x1= 0, x2 = 0;
	
	
	std::cout << "\nрешение арбуза\n";
	std::cout << "ax^2+bx+c=0\n";

	std::cout << "Введите а: ";
	std::cin >> a;

	std::cout << "Введите b: ";
	std::cin >> b;

	std::cout << "Введите c: ";
	std::cin >> c;

	std::cout << a << "x^2 + " << b << "x + " << c << " = 0\n\n";
	D = std::pow(b, 2) - 4 * a * c;
	
	std::cout << "дискриминант:" << D << "\n\n";

	if ( D < 0)
	{
		std::cout << "корней нету!\n";
	}
	else if (D == 0)
	{
		x1 = -b / (2 * b);
			std::cout << "один конерь : " << x1 << "\n";
	}
	else
	{
		x1 = (-b - std::sqrt(D)) / (2 * a);
		x2 = (-b + std::sqrt(D)) / (2 * a);
		std::cout << "Первый корень: " << x1 << "второй корень:" << x2 << "\n";

	}
*/
// игра
/*
 
 	int choose = 0, hp = 0, number = 0, random = 0;
	int maxhp = 25, maxhphard = 25;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\t Игра \"угадай где арбуз\" \n\n\n";
		std::cout << "1 - начать игру\n";
		std::cout << "2 - настройки\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\t Игра \"выбор сложность угадай где арбуз\" \n\n\n";
				std::cout << "1 - Лёгкий (1 - 500)\n";
				std::cout << "2 - Cложный (1 - 1000)\n";
				std::cout << "0 - Выход в меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					random = rand() % 500 + 1;
					hp = maxhp;
					while (true)
					{
						system("cls");
						std::cout << "кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 500 \n\n";
						std::cin >> number;

						if (number == random)
						{

							std::cout << "Вы угадали где арбуз\n";
							std::cout << "Осталось жизней " << hp << "\n";
							system("pause");
							break;
						}
						else if (number < 1 || number >500)
						{
							std::cout << "Вы вышли за лимит";
							Sleep(1200);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "вы проиграли\n";
								std::cout << "Число где был арбуз: " << random << "\n";
								system("pause");
								break;
							}
							else if (number < random)
							{
								std::cout << "\n\tБольше числа где арбуз\n";
							}
							else if (number > random)
							{
								std::cout << "\tМеньше числа где арбуз\n";
							}
							std::cout << "\t\tНе верно\n\n\n";
							system("pause");

						}
					}

				}
				return 0;
			}
		}

		else if (choose == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "Выберите изменения\n";
				std::cout << "1 - изменить хп лёгкий режим\n";
				std::cout << "2 - изменить хп Cложный режим\n";
				std::cout << "0 - выход\n";
				std::cin >> choose;
				if (choose == 1)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите сколько хп хотите поставить\n";
						std::cout << "допустимо Любое кол-во жизни\n";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
							maxhp = choose;
						{
							std::cout << "успешно изменено\n";
							maxhp = choose;
							std::cout << "изменено на " << maxhp << "hp";
							Sleep(1000);
							break;
						}
					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите сколько хп хотите поставить\n";
						std::cout << "допустимо от 1 до 100\n";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "невозможно\n";
							Sleep(1000);
							break;
						}
						else
						{
							std::cout << "успешно изменено\n";
							maxhphard = choose;
							std::cout << "изменено на " << maxhphard << "hp";
							Sleep(1000);
							break;
						}
					}
				}

			}
		}

		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\t Бюджет Соси  \n\n\n\n\n\n";
			break;
		}

		else
		{
			std::cout << "Некоректный ввод \n\n";
			Sleep(1500);
		}
	}
return 0;
}
*/
// массив с рандом
/*
const int size = 6;
int arr[size]{};
int arbyz = 0;
int duna = 0;
for (int i = 0; i < size; i++)
{
	arr[i] = rand() % 21 - 10;
}
for (int i = 0; i < size; i++)
{
	std::cout << arr[i] << " ";
}

std::cout << "\n\n";
for (int i = 0; i < size; i++)
{
	if (arr[i] > 0)
	{
		arbyz += arr[i];
		std::cout << arr[i] << " ";
	}
}
std::cout << "\nположительное: " << arbyz << "\n";

for (int i = 0; i < size; i++)
{
	if (arr[i] < 0)
	{
		duna += arr[i];
		std::cout << arr[i] << " ";
	}
}
std::cout << "\nотрицательное: " << duna << " \n";

double sos = (arbyz + duna) / 10.0;
std::cout << "средний " << sos << "\n\n";
*/