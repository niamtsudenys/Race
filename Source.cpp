#include <iostream>
#include <conio.h>                                                          //  dlya _getch
#include <Windows.h>                                                        //  dlya sleep
//#include <iomanip>
//#include <ctime>

using namespace std;

HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);

enum class color : unsigned short
{
	black, blue, green, cyan, red, magenta, brown, lightgray, darkgray,
	lightblue, lightgreen, lightcyan, lightred, lightmagenta, yellow, white
};

void set_col(color foreground, color background)
{
	SetConsoleTextAttribute(hout, ((short)background << 4) | (short)foreground);
}

void gotoxy(int x, int y)
{
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void aPatrioticMoment()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	for (int k = 0; k < 1; k++)
	{

		for (int i = 0; i < 30; i++)
		{
			for (int j = 0; j < 120; j++)
			{
				gotoxy(j, i);

				if (i < 15)
				{
					if (i == 3 && j >= 20 && j < 27)
					{
						gotoxy(20, i);
						set_col(color::yellow, color::blue);
						cout << "ðóññêèé";
					}
					else if (i == 7 && j >= 20 && j < 27)
					{
						gotoxy(20, i);
						set_col(color::yellow, color::blue);
						cout << "âîåííûé";
					}
					else if (i == 11 && j >= 20 && j < 27)
					{
						gotoxy(20, i);
						set_col(color::yellow, color::blue);
						cout << "êîðàáëü";
					}
					else if (i == 13 && j > 90 && j < 104)
					{
						gotoxy(90, i);
						set_col(color::yellow, color::blue);
						cout << "ÑËÀÂÀ ÓÊÐÀ¯ÍÈ!";
					}
					else
					{
						set_col(color::yellow, color::blue);
						cout << " ";
					}
				}
				else
				{
					if (i == 16 && j > 90 && j < 103)
					{
						gotoxy(90, i);
						set_col(color::blue, color::yellow);
						cout << "ÃÅÐÎßÌ ÑËÀÂÀ!";
					}
					else if (i == 17 && j >= 20 && j < 23)
					{
						gotoxy(20, i);
						set_col(color::blue, color::yellow);
						cout << "ÈÄÈ";
					}
					else if (i == 21 && j >= 20 && j < 25)
					{
						gotoxy(20, i);
						set_col(color::blue, color::yellow);
						cout << "ÍÀÕÓÉ";
					}
					else
					{
						set_col(color::blue, color::yellow);
						cout << " ";
					}
					set_col(color::white, color::black);
				}

			}
		}
		_getch();
		system("cls");
	}
}

void initialSettings()
{

}

void city()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 120; j++)
		{
			if (j > 1 && j < 7)
			{
				if (i == 2 && j > 3 && j < 6)
				{
					set_col(color::black, color::white);
				}
				else if (i == 4 && j > 3 && j < 6)
				{
					set_col(color::black, color::white);
				}
				else if (i == 6 && j > 3 && j < 6)
				{
					set_col(color::black, color::white);
				}
				else if (i == 8 && j >= 3 && j < 6)
				{
					set_col(color::black, color::red);
				}
				else if (i == 9 && j >= 3 && j < 6)
				{
					set_col(color::black, color::red);
				}
				else
				{
					set_col(color::black, color::lightgreen);
				}
			}
			else if (j > 6 && j < 20)
			{
				if (i == 2 && j > 8 && j < 19)
				{
					set_col(color::black, color::blue);
				}
				else if (i == 4 && j > 8 && j < 19)
				{
					set_col(color::black, color::blue);
				}
				else if (i == 6 && j > 8 && j < 19)
				{
					set_col(color::black, color::blue);
				}
				else if (i == 1 && j >= 11 && j < 13)
				{
					set_col(color::black, color::white);
				}
				else if (i == 3 && j >= 11 && j < 13)
				{
					set_col(color::black, color::white);
				}
				else if (i == 5 && j >= 11 && j < 13)
				{
					set_col(color::black, color::white);
				}
				else if (i == 7 && j >= 11 && j < 13)
				{
					set_col(color::black, color::white);
				}
				else if (i == 1 && j >= 15 && j < 17)
				{
					set_col(color::black, color::white);
				}
				else if (i == 3 && j >= 15 && j < 17)
				{
					set_col(color::black, color::white);
				}
				else if (i == 5 && j >= 15 && j < 17)
				{
					set_col(color::black, color::white);
				}
				else if (i == 7 && j >= 15 && j < 17)
				{
					set_col(color::black, color::white);
				}
				else
				{
					set_col(color::black, color::darkgray);
				}
			}
			else if (i > 3 && j > 30 && j < 45)
			{
				if (i == 5 && j > 33 && j < 36)
				{
					set_col(color::black, color::yellow);
				}
				else if (i == 7 && j > 33 && j < 36)
				{
					set_col(color::black, color::yellow);
				}
				else if (i == 5 && j > 39 && j < 42)
				{
					set_col(color::black, color::yellow);
				}
				else if (i == 7 && j > 39 && j < 42)
				{
					set_col(color::black, color::yellow);
				}
				else
				{
					set_col(color::black, color::brown);
				}
			}
			else if (i > 1 && j > 60 && j < 76)
			{
				if (i == 3 && j > 63 && j < 66)
				{
					set_col(color::black, color::yellow);
				}
				else if (i == 5 && j > 63 && j < 66)
				{
					set_col(color::black, color::yellow);
				}
				else if (i == 7 && j > 63 && j < 66)
				{
					set_col(color::black, color::yellow);
				}
				else if (i == 3 && j > 70 && j < 73)
				{
					set_col(color::black, color::yellow);
				}
				else if (i == 5 && j > 70 && j < 73)
				{
					set_col(color::black, color::yellow);
				}
				else if (i == 7 && j > 70 && j < 73)
				{
					set_col(color::black, color::yellow);
				}
				else
				{
					set_col(color::black, color::cyan);
				}
			}
			else if (i > 3 && j > 80 && j < 96)
			{
				if (i == 5 && j > 83 && j < 86)
				{
					set_col(color::black, color::yellow);
				}
				else if (i == 7 && j > 83 && j < 86)
				{
					set_col(color::black, color::yellow);
				}
				else if (i == 5 && j > 90 && j < 93)
				{
					set_col(color::black, color::yellow);
				}
				else if (i == 7 && j > 90 && j < 93)
				{
					set_col(color::black, color::yellow);
				}
				else
				{
					set_col(color::black, color::red);
				}
			}
			else if (j > 101 && j < 107)
			{
				if (i == 2 && j > 103 && j < 106)
				{
					set_col(color::black, color::lightgreen);
				}
				else if (i == 4 && j > 103 && j < 106)
				{
					set_col(color::black, color::lightgreen);
				}
				else if (i == 6 && j > 103 && j < 106)
				{
					set_col(color::black, color::lightgreen);
				}
				else if (i == 8 && j >= 103 && j < 106)
				{
					set_col(color::black, color::brown);
				}
				else if (i == 9 && j >= 103 && j < 106)
				{
					set_col(color::black, color::brown);
				}
				else
				{
					set_col(color::black, color::blue);
				}
			}
			else if (j > 106 && j < 119)
			{
				if (i == 2 && j > 107 && j < 118)
				{
					set_col(color::black, color::magenta);
				}
				else if (i == 4 && j > 107 && j < 118)
				{
					set_col(color::black, color::magenta);
				}
				else if (i == 6 && j > 107 && j < 118)
				{
					set_col(color::black, color::magenta);
				}
				else if (i == 1 && j >= 111 && j < 113)
				{
					set_col(color::black, color::lightgreen);
				}
				else if (i == 3 && j >= 111 && j < 113)
				{
					set_col(color::black, color::lightgreen);
				}
				else if (i == 5 && j >= 111 && j < 113)
				{
					set_col(color::black, color::lightgreen);
				}
				else if (i == 7 && j >= 111 && j < 113)
				{
					set_col(color::black, color::lightgreen);
				}
				else if (i == 1 && j >= 115 && j < 117)
				{
					set_col(color::black, color::lightgreen);
				}
				else if (i == 3 && j >= 115 && j < 117)
				{
					set_col(color::black, color::lightgreen);
				}
				else if (i == 5 && j >= 115 && j < 117)
				{
					set_col(color::black, color::lightgreen);
				}
				else if (i == 7 && j >= 115 && j < 117)
				{
					set_col(color::black, color::lightgreen);
				}
				else
				{
					set_col(color::black, color::yellow);
				}
			}
			else
			{
				set_col(color::black, color::lightcyan);
			}
			cout << " ";
		}

		cout << endl;
	}

	set_col(color::white, color::black);
}

void track(int& mid)
{
	for (int i = 10; i < 29; i++)
	{
		for (int j = 0; j < 120; j++)
		{
			if (j >= 0 && j < 60 - i)
			{
				if (i % 2 == 0)
				{
					set_col(color::lightgreen, color::lightgreen);
				}
				else
				{
					set_col(color::white, color::white);
				}
				cout << "k";
			}
			else if (j >= 60 + i && j < 120)
			{
				if (i % 2 == 0)
				{
					set_col(color::lightgreen, color::lightgreen);
				}
				else
				{
					set_col(color::white, color::white);
				}
				cout << "j";
			}
			else
			{
				set_col(color::darkgray, color::darkgray);
				cout << "g";
			}
		}

		for (int j = 40; j < 80; j++)                                              // risuem mashinu 
		{
			if (i >= 23 && i < 28)
			{
				gotoxy(mid, i);

				for (int j = mid; j < mid + 8; j++)
				{
					if (i == 24 && j > mid && j < mid + 7)                               // lobovuha
					{
						set_col(color::darkgray, color::darkgray);
					}
					else if ((i == 23 && j == mid + 2) || (i == 23 && j == mid + 5))         // fary perednie
					{
						set_col(color::blue, color::red);
					}
					else if ((i == 26 && j >= mid + 2 && j <= mid + 5))                      // liuk
					{
						set_col(color::blue, color::blue);
					}
					else if ((i == 25 && j == mid) || (i == 25 && j == mid + 7)
						|| (i == 26 && j == mid) || (i == 26 && j == mid + 7))           // dveri
					{
						set_col(color::cyan, color::cyan);
					}
					else if ((i == 27 && j > mid && j < mid + 7))                        // spoyler
					{
						set_col(color::yellow, color::red);
					}
					else
					{
						set_col(color::red, color::red);                            // kuzov                                
					}
					cout << "#";
				}

				if (i == 24 || i == 26)
				{
					gotoxy(mid - 1, i);                                             // kalyosa s levoy storony

					if (j == mid - 1)
					{
						set_col(color::black, color::black);
						cout << " ";
					}

					gotoxy(mid + 8, i);                                                // kalyosa s pravoy storony

					if (j == mid + 8)
					{
						set_col(color::black, color::black);
						cout << " ";
					}
				}
			}
		}
		cout << endl;
	}
}

void printMap(int& mid)
{
	for (int i = 0; i < 1; i++)
	{
		city();
		track(mid);
		_getch();
	}
	
}

void userInteraction(int& move, bool& gameOver, int& mid)

{
	if (_kbhit())                        // vozvrashyaet true esli polyzovately najal kakuiu libo knopku na klaviature
	{
		switch (_getch())
		{
		case 100:   // d  vpravo
			mid += 13;
			break;
		case 115:   // s  vniz
			move = 0;
			break;
		case 97:    // a  vlevo
			mid -= 13;
			break;
		case 'w':   // w  vverh            119
			move = 1;
			break;
		case 'x':   
			gameOver = !gameOver;
			break;
		}
	}
}

void gameLogic(bool& iteration, int& mid, bool& gameOver)
{                                                                  
	                                           // prorisovka karty v dvijenii
	for (int i = 10; i < 29; i++)
	{
		gotoxy(0, i);                                                         // levyi kray   // trava menyaet tsvet     // imitatsiya ezdy

		for (int j = 0; j < 60 - i; j++)
		{
			if (iteration == 0)
			{
				set_col(color::lightgreen, color::lightgreen);
			}
			else
			{
				set_col(color::white, color::white);
			}
			cout << "k";

		}

		gotoxy(60 + i, i);                                                      // pravyi kray   // trava menyaet tsvet     // imitatsiya ezdy

		for (int j = 60 + i; j < 120; j++)
		{
			if (iteration == 0)
			{
				set_col(color::lightgreen, color::lightgreen);
			}
			else
			{
				set_col(color::white, color::white);
			}
			cout << "k";
		}

		for (int j = 40; j < 80; j++)                                             //  esli mashina pomenyala polojenie to risuem zanogo asfalyt      
		{
			if (i >= 23 && i < 28)
			{
				if (mid == 44 || mid == 70)
				{
					gotoxy(55, i);

					for (int t = 55; t < 66; t++)
					{
						set_col(color::darkgray, color::darkgray);
						cout << " ";
					}
				}
				else if (mid == 57 || mid < 44 || mid > 70)
				{
					gotoxy(41, i);

					for (int t = 41; t < 54; t++)
					{
						set_col(color::darkgray, color::darkgray);
						cout << " ";
					}

					gotoxy(69, i);

					for (int t = 69; t < 80; t++)
					{
						set_col(color::darkgray, color::darkgray);
						cout << " ";
					}
				}
				
				gotoxy(mid, i);                                                           // risuem mashinu 

				for (int j = mid; j < mid + 8; j++)                                              
				{
					 if (i == 24 && j > mid && j < mid + 7)                               // lobovuha
					{
						set_col(color::darkgray, color::darkgray);
					}
					 else if ((i == 23 && j == mid + 2) || (i == 23 && j == mid + 5))     // fary perednie
					 {
						 set_col(color::blue, color::red);
					 }
					 else if ((i == 26 && j >= mid + 2 && j <= mid + 5))                   // liuk
					 {
						 set_col(color::blue, color::blue);
					 }
					 else if ((i == 25 && j == mid) || (i == 25 && j == mid + 7)
						 || (i == 26 && j == mid) || (i == 26 && j == mid + 7))           // dveri
					 {
						 set_col(color::cyan, color::cyan);
					 }
					 else if ((i == 27 && j > mid && j < mid + 7))                        // spoyler
					 {
						 set_col(color::yellow, color::red);
					 }
					else
					{
						set_col(color::red, color::red);                                  // kuzov                                
					}
					 cout << "#";
				}

				if (i == 24 || i == 26)                                                 
				{
					gotoxy(mid - 1, i);                                                  // kalyosa s levoy storony
					
					if (j == mid - 1 )
					{
						set_col(color::black, color::black);
						cout << " ";
					}

					gotoxy(mid + 8, i);                                                 // kalyosa s pravoy storony
					
					if (j == mid + 8)
					{
						set_col(color::black, color::black);
						cout << " ";
					}
				}
			}
		}
		                                                    
		cout << endl;
		iteration = !iteration;
	}

	if (mid < 44 || mid > 70)
	{
		gotoxy(55, 15);
		set_col(color::red, color::darkgray);
		cout << "GAME OVER!";
		gotoxy(0, 29);
		gameOver = 1;
	}
}

int main()
{
	int move = 0;
	int mid = 57;

	bool gameOver = 0;
	bool iteration = 0;
	
	aPatrioticMoment();

	printMap(mid);

	for (int i = 0; !gameOver; i += 5)
	{
		userInteraction(move, gameOver, mid);

		gameLogic(iteration, mid, gameOver);

		set_col(color::red, color::lightblue);
		cout.precision(2);
		cout << (double) i / 1000 << " km      " << mid << "      move   " << move;

		set_col(color::white, color::black);
	}
	
	return 0;
}
