#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>
//#include <string.h>
//#include <malloc.h>
//static int mistake = 5;
int randomNumber(int minNum, int maxNum) {
	int result;
	int lowNum = 0;
	int hiNum = 0;
	if (minNum < maxNum) {
		lowNum = minNum;
		hiNum = maxNum + 1;
	}
	else {
		lowNum = maxNum + 1;
		hiNum = minNum;
	}
	result = (rand() % (hiNum - lowNum)) + lowNum;
	return result;
}

void gotoString(int x, int y)
{
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

int yakubovich[33];

void yakInside() {
	for (int i = 1; i <= 33; i++) {
		yakubovich[i] = i;



	}
}


void drawYAKUBOVICH() {
	yakInside();
	system("cls");

	for (int i = 0; i < sizeof(yakubovich) / sizeof(yakubovich[0]); i++) {
		if (yakubovich[i] == 0) {
			printf("*********************************************************************,,,,,,,,,,,,,,,,..................................\n");
		}
		else if (yakubovich[i] == 1) {
			printf("*********************************************************##(#((((****,,,,,,,,,,,,,,,,..................................\n");
		}
		else if (yakubovich[i] == 2) {
			printf("*************************************************((((/(###(##(##((((#%%*,,,,,,,,,,,,,..................................\n");
		}
		else if (yakubovich[i] == 3) {
			printf("*********************************************/((/(///(#####(((/(##(((/#%%%/,,,,,,,,,,..................................\n");
		}
		else if (yakubovich[i] == 4) {
			printf("********************************************(//,..,/((#(#(///**//////,,,*(#(,,,,,,,,...................................\n");
		}
		else if (yakubovich[i] == 5) {
			printf("*******************************************//*.....*/////////////*,,.,,,,,#%%,,,,,,,...................................\n");
		}
		else if (yakubovich[i] == 6) {
			printf("******************************************,//.......,,,,,,,,,.......,,,,,*%%&/,,,,,,,..................................\n");
		}
		else if (yakubovich[i] == 7) {
			printf("*****************************************,*/,........,,,,,,,,..,,,,,,,,,.((((&(,,,,,,..............................    \n");
		}
		else if (yakubovich[i] == 8) {
			printf("*****************************************//*.........,,,,,,,,,,..,.,,....*(/((&/,,,,..............................     \n");
		}
		else if (yakubovich[i] == 9) {
			printf("*****************************************//..............................,//(/(%*,,,,.............................     \n");
		}
		else if (yakubovich[i] == 10) {
			printf("****************************************,*/.....................,........*,//((&&,,,,.............................     \n");
		}
		else if (yakubovich[i] == 11) {
			printf("*****************************************//*..............,,,,,,,,.,,....,*,(/#&&(,,,.............................     \n");
		}
		else if (yakubovich[i] == 12) {
			printf("*****************************************///*..........................,.,*/*/(%%%,,,.............................     \n");
		}
		else if (yakubovich[i] == 13) {
			printf("****************************************///**............... .         ....,./#&%.,,,.............................     \n");
		}
		else if (yakubovich[i] == 14) {
			printf("***************************************/%***,..........      . ..      . .../*#%/,,,,,...........................      \n");
		}
		else if (yakubovich[i] == 15) {
			printf("***************************************/.,,......,. ...       .,,           .(%/,,,,,,...........................      \n");
		}
		else if (yakubovich[i] == 16) {
			printf("***************************************/   ...  .. .       .. .,,.    ... ...#,#*,,,,,...........................      \n");
		}
		else if (yakubovich[i] == 17) {
			printf("****************************************(   ... . ...       ...,,,.............*,,,,,,...........................      \n");
		}
		else if (yakubovich[i] == 18) {
			printf("*****************************************/  ... . .............,,,,,.........,.*,,,,,,...........................      \n");
		}
		else if (yakubovich[i] == 19) {
			printf("******************************************/...  .......... ...,,,,,,,.       ..,,,,,,,...........................      \n");
		}
		else if (yakubovich[i] == 20) {
			printf("******************************************/*   .. ...      ......... .**,    . .,,,,,,...........................      \n");
		}
		else if (yakubovich[i] == 21) {
			printf("******************************************//*....       ,*(,,      .,//////.   .,,,,,,...........................      \n");
		}
		else if (yakubovich[i] == 22) {
			printf("******************************************/*///.       /(((((/*,...,*/*****//..,,,,,,,...........................      \n");
		}
		else if (yakubovich[i] == 23) {
			printf("********************************************///     .,/#//,//,...  . ....  ..  ,,,,,,,...........................      \n");
		}
		else if (yakubovich[i] == 24) {
			printf("*****************************************//////(.               __            ,,,,,,,,,..........................      \n");
		}
		else if (yakubovich[i] == 25) {
			printf("***************************************////////(                      ...    ,*,,,,,,,...........................      \n");
		}
		else if (yakubovich[i] == 26) {
			printf("*****************************************/////#..       ....        .....   **,,,,,,,,,,.........................      \n");
		}
		else if (yakubovich[i] == 27) {
			printf("***************************************//*///.           ................  /**,,,,,,,,,,.........................      \n");
		}
		else if (yakubovich[i] == 28) {
			printf("**********************************/*/*//.  .     .          .... .        , /,,,,,,,,,,,,........................      \n");
		}
		else if (yakubovich[i] == 29) {
			printf("*****************************/*/////..           ,,                      .  , ,,,,,,,,,,,........................      \n");
		}
		else if (yakubovich[i] == 30) {
			printf("**************************////*(....       ..     ,,.                    .  *  *......,,,,,......................      \n");
		}
		else if (yakubovich[i] == 31) {
			printf("****************/*****/*/,........        ...     ,,,,,                    ,*,  .....  ......,,,................       \n");
		}
		else if (yakubovich[i] == 32) {
			printf("*****************//*...........            .       ,,,,,,                 ,,**   ...  ..  . ......,.,............      \n");
		}
		else if (yakubovich[i] == 33) {
			printf("                                                                                                                       \n");
		}
		//printf("\n");
		//Sleep(100);
	}
}



void baraban1() {

	printf("....................???+=..........+???.....................\n");
	printf("................??777777.,..:I.I...7II777??.................\n");
	printf(".............+?7777?7.777...:I.?...7777 7777?+..............\n");
	printf("...........?~==77777=7777.........7777.7.7777+=?............\n");
	printf(".........I=....7777777777.........77777777777...+I..........\n");
	printf("........I.......777777777I........7777777777......?.........\n");
	printf("......?....I,....77 777777....... 77777777I...777..,?.......\n");
	printf(".....I............ 7777777.......77777777I.......7...?......\n");
	printf("....?I,............7777777=......7777777~............??.....\n");
	printf("...?7777 ...........7777777.....I777777............7777+....\n");
	printf("..?77777777.......... 77777.....777777...........77777 7?...\n");
	printf("..I77.7777777.........77777.....77777.........: 7777 7  I...\n");
	printf(".?77.7777777777I.......7777 ...77777........ 777777777=7 ?..\n");
	printf(".777 7777777777777......7777...7777.......77777777777    7..\n");
	printf("I+ 7777777777777777 .....777...777.....777777777777777    ?.\n");
	printf("I.,...~777777777777777?...777.777....77777777777777777I,.,~.\n");
	printf(":.............I7777777777..7=.7 ..:7777777777 ?...........~.\n");
	printf("..7..................: 7777?I?++I 7 7 ?................,....\n");
	printf("..?........................I77+=,.....................~~:,.~\n");
	printf("..I.................+ 7 777+?+=~,? 7 :................:,,...\n");
	printf("~...........? 7777777777:.. 7.,:..7  7    77I.............:.\n");
	printf("I..,I77777777777777777....777.777...?777777777777777~.....I.\n");
	printf("?=?77777777777777777,....777...777.....  7777777 7777    =~.\n");
	printf(".7777777777777777.......7777...7777......777777 7   77 7 7..\n");
	printf(".?77 . 77777777........7777 ... 77 7.......I77   77  7.7 ?..\n");
	printf("..I777777777:.........77777.....77 77........,7    77+~ I...\n");
	printf("..? 777777...........777777..... 7 77 ..........777777 7?...\n");
	printf("...?7777............ 777777.....77777 7...........7777 ?....\n");
	printf("....I=..??........~7777777......:7 77 77............:7?.....\n");
	printf(".....?,.,+7?.....~77777777.......7777777 .......7....?......\n");
	printf("......?,.++I?=..I777777777.......7   7 777....7,....?.......\n");
	printf("........I..~,..7777777777........I7 7777 77.......?.........\n");
	printf(".........I?...77777777777.........777      7....=I..........\n");
	printf("...........?I+ 77+777 777.........77 7 ..?777I~?............\n");
	printf(".............+=777 7,7  ...,.+....7   7= 777?+..............\n");
	printf("................??77  7 ...7.7.I...7    7?I.................\n");
	printf("....................???7..........I=???.....................\n");
	printf("............................:~:.............................\n");

}
void baraban2() {

	printf("==========================.........+???.....................\n");
	printf("................??777777.,==========================........\n");
	printf(".............+?7777?7.777...:I.?...7777 7777?+..............\n");
	printf("...........?~==77777=7777.........7777.7.7777+=?............\n");
	printf(".........I=...==================================+I..........\n");
	printf("........I.......777777777I........7777777777......?.........\n");
	printf("......?....I,....77 777777....... 77777777I...777..,?.......\n");
	printf(".....I............ 7777777.......77777777I.......7...?......\n");
	printf("....?I,............7777777=......7777777~............??.....\n");
	printf("...?7777 ........=======================............7777+....\n");
	printf("..?77777777.......... 77777.....777777...........77777 7?...\n");
	printf("..I77.7777777.........77777.....77777.........: 7777 7  I...\n");
	printf(".?77.7777777777I.......7777 ...77777........ 777777777=7 ?..\n");
	printf(".777 7777777777777......7777...7777.......77777777777    7..\n");
	printf("I+ 7777777777777777 .....777...777.....777777777777777    ?.\n");
	printf("I.,...~777777777777777?...777.777....77777777777777777I,.,~.\n");
	printf(":.............I7777777777..7=.7 ..:7777777777 ?...........~.\n");
	printf("..7........=================================================\n");
	printf("..?........................I77+=,.....................~~:,.~\n");
	printf("..I.................+ 7 777+?+=~,? 7 :................:,,...\n");
	printf("~...........? 7777777777:.. 7.,:..7  7    77I.............:.\n");
	printf("I..,I77777777777777777....777.777...?777777777777777~.....I.\n");
	printf("?=?77777777777777777,....777...777.....  7777777 7777    =~.\n");
	printf(".7777777777777777.......7777...7777......777777 7   77 7 7..\n");
	printf(".?77 . 77777777........7777 ... 77 7.......I77   77  7.7 ?..\n");
	printf("===========================================================.\n");
	printf("..? 777777...........777777..... 7 77 ..........777777 7?...\n");
	printf("...?7777............ 777777.....77777 7...........7777 ?....\n");
	printf("============================================================\n");
	printf(".....?,.,+7?.....~77777777.......7777777 .......7....?......\n");
	printf("......?,.++I?=..I777777777.......7   7 777....7,....?.......\n");
	printf("============================================================.\n");
	printf(".........I?...77777777777.........777      7....=I..........\n");
	printf("...........?I+ 77+777 777.........77 7 ..?777I~?............\n");
	printf(".............+=777 7,7  ...,.+....7   7= 777?+..............\n");
	printf("....======================================================..\n");
	printf("....................???7..........I=???.....................\n");
	printf("............................:~:.............................\n");

}
void BARABAN() {
	for (int i = 0; i < 3; i++) {
		baraban1();
		Sleep(400);
		system("cls");
		baraban2();
		Sleep(100);
		system("cls");
	}
}



int oborotBarabana() {
	if (randomNumber(1, 2) == 1)
	{
		return 2; // 2 - ���� (+) � ����� ����� ������� ����� ����� �� �����

	}
	else if (randomNumber(1, 4) == 2)
	{
		return 5;//���� (0) � ��������� ���� �� �������, �� ��� ��������� ������� ������.

	}
	else {
		if (randomNumber(1, 3) == 1) {
			return 3; //���� (�) � ����� ����� �������: ���������� ���� ��� ����� ����, ���������� � ������ �����. 

		}
		else {
			if (randomNumber(1, 2) == 1) {
				return 4; //���� � ������ ���� ��������� ������, ���� �� ������� � �� ����������. 
			}
		}
	}


}
int Counter() {
	static int counter = 33;
	counter++;
	if (counter >= 45) {
		for (int i = 0; i < 12; i++)
		{
			gotoString(0, 33 + i);
			Sleep(50);
			printf("                                                                                                  \n");
		}
		counter = 33;
	}
	return counter;
}
void SPEAKING(char *a, int n) {
	//static int counter = 33;
	n -= 1;
	int string = Counter();
	Sleep(50); //150
	gotoString(0, 33);
	printf("                                                                                             \n");
	Sleep(50); //150

	for (int i = 0; i <= n; i++) {
		if (i % 2) {

			gotoString(0, 24);
			printf("*****************************************//////(.              <===>          ,,,,,,,,,.......................... \n");

			Sleep(50); //50
		}
		else {

		}
		gotoString(i, string);
		printf("%c", a[i]);
		Sleep(50); //50
		gotoString(0, 24);
		printf("*****************************************//////(.               __            ,,,,,,,,,..........................      \n");


	}

}
static int win;
int winCounter() {

	win++;
	return win;
}
void task(char *word, char *question, int word_size)
{
	int mistake = word_size - 1;
	char *current_answer;
	current_answer = (char*)malloc((word_size) * sizeof(char));

	for (int i = 0; i <= sizeof(current_answer) / sizeof(current_answer[0]); i++) {
		current_answer[i] = word[i];

	}
	gotoString(0, Counter());
	printf("������ ����� - %d%s", word_size - 1, " ����");
	//char first[31] = "������ ����� - 5 ����, ������:";
	//SPEAKING(first, (sizeof(first) / sizeof(first[0])));
	char quest[69];
	for (int i = 0; i <= (sizeof(quest) / sizeof(quest[0])); i++) {
		quest[i] = question[i];

	}
	SPEAKING(quest, (sizeof(quest) / sizeof(quest[0])));
	char pravilo[48] = "�� ������ ������� �����, ���� ��� ����� �������";
	SPEAKING(pravilo, (sizeof(pravilo) / sizeof(pravilo[0])));
	char pravilo2[64] = "�������� '1'��� ������ �����, '2', ���� �� ������ ����� �������";
	SPEAKING(pravilo2, (sizeof(pravilo2) / sizeof(pravilo2[0])));
	char *maybe_answer;
	maybe_answer = (char*)malloc((word_size) * sizeof(char));
	int mode = 0;
	while (1) {
		gotoString(0, Counter());
		static int ittr = 0;
		char save[sizeof(current_answer) / sizeof(current_answer[0])];
		scanf_s("%d", &mode);
		//char word[5];
		if (mode == 1) {



			int win = 0;
			while (mistake > 0) {
				char bukva[22] = "������� �����, � ��� ";
				SPEAKING(bukva, (sizeof(bukva) / sizeof(bukva[0])));
				gotoString(0, Counter());
				printf("%d", mistake);
				printf(" �������");
				ittr++;
				mistake--;
				char letter_str[100];
				gotoString(0, Counter());
				scanf_s("%s", letter_str, 100);
				char letter;
				letter = letter_str[0];

				for (int i = 0; i < (sizeof(save) / sizeof(save[0])); i++)
				{
					if (save[i] == letter)
					{
						char wrongg[25] = "� ��� ����� ����� �����!";
						SPEAKING(wrongg, (sizeof(wrongg) / sizeof(wrongg[0])));
					}
				}


				gotoString(0, Counter());

				for (int j = 0; j < word_size - 1; j++) {

					if (letter == current_answer[j]) {
						save[j] = letter;
						win++;
					}
					//		if (letter == current_answer[j] || save[j] == current_answer[j]) {
					if (save[j] == current_answer[j]) {
						printf("%c", current_answer[j]);

					}
					else {

						printf("*");
					}
				}

				if (win >= 5) {
					char win[39] = "� ��� ����������!!! �������������!!!1!";
					SPEAKING(win, (sizeof(win) / sizeof(win[0])));

					if (winCounter() > 12) {
						return 0;
					}
					else {
						mistake = word_size - 1;
						return 1;
					}

				}
				gotoString(0, Counter());
			}
			char miss[62] = "������� ������ ���... ������� 2, ���� �� ������ ������� �����";
			SPEAKING(miss, (sizeof(miss) / sizeof(miss[0])));
			gotoString(0, Counter());
			for (int i = 0; i < word_size - 1; i++)
			{
				if (save[i] == current_answer[i])
				{
					printf("%c", current_answer[i]);

				}
				else {
					printf("*");
				}
			}




		}
		else if (mode == 2) {
			int errors = 0;
			char answ[22] = "� ����� �� ��� �����?";
			SPEAKING(answ, (sizeof(answ) / sizeof(answ[0])));

			gotoString(0, Counter());
			scanf_s("%s", maybe_answer, (sizeof(maybe_answer) / sizeof(maybe_answer[0])));
			for (int i = 0; i < word_size - 1; i++)
			{


				if (current_answer[i] == maybe_answer[i])
				{
					printf("%c", current_answer[i]);
				}
				else
				{
					errors++;

				}

			}

			if (errors >= 1)
			{
				gotoString(0, Counter());
				char lose[31] = "�� �� �������! �� ��������� =(";
				SPEAKING(lose, (sizeof(lose) / sizeof(lose[0])));
				return 0;


			}
			if (errors < 1)
			{

				char win[39] = "� ��� ����������!!! �������������!!!1!";
				SPEAKING(win, (sizeof(win) / sizeof(win[0])));
				if (winCounter() > 12) {
					return 0;
				}
				else {
					mistake = 5;
					return 1;
				}


				continue;
			}
		}
		else {
			continue;
		}

	}

	//	printf("\n%s", maybe_answer);


}



void main() {
	//	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));


	drawYAKUBOVICH();

	char hello[39] = "\t����� ���������� �� ��� '���� �����'!";
	SPEAKING(hello, (sizeof(hello) / sizeof(hello[0])));


	char first[6] = "�����";
	char first_q[69] = "��� ���� ������������ ������, ������ � �� ����� ��� ����� �������...";
	task(first, first_q, (sizeof(first) / sizeof(first[0])));

	char second[6] = "�����";
	char second_q[69] = "���.................";
	task(second, second_q, (sizeof(second) / sizeof(second[0])));

	char third[6] = "�����";
	char third_q[69] = "��� ������ ������ ������� ��� �����?";
	task(third, third_q, (sizeof(second) / sizeof(second[0])));

	char yakub[10] = "��������";
	char yakub_q[69] = "��� �?";
	task(yakub, yakub_q, (sizeof(second) / sizeof(second[0])));

	char macos[6] = "macos";
	char macos_q[69] = "�������� UNIX system-like � ��������";
	task(macos, macos_q, (sizeof(second) / sizeof(second[0])));

	/*
	char naclz[69] = "";
	task(second, second_q);
	*/



	//	BARABAN();
	system("pause");
}