#include "Lab. work 9.h"

/* TASK 25: ������ ����� �������, � ����� �������� ����� �����. ���������, �� � ������ ����� � �����: ��� ����� �����,
   ��� �����������, ������ �� ���� �����, �� �����������. ����� ������ ���� ������� ���� � ����. */

int main() {
	std::string str{};
	std::cout << "Please, enter a sentence consists of braces: ";
	getline(std::cin, str);
	labwork_9::input_check_sentence(str.c_str());
}